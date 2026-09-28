#include <bits/stdc++.h>
using namespace std;
int n;
void tower(int n,char dau,char cuoi,char giua){
    if(n==1){
        cout<<dau<<" -> "<<cuoi<<endl;
        return;
    }
    tower(n-1,dau,giua,cuoi);
    cout<<dau<<" -> "<<cuoi<<endl;
    tower(n-1,giua,cuoi,dau);
}
int main(){
    cin>>n;
    char dau='A',giua='B',cuoi='C';
    tower(n,dau,cuoi,giua);
    return 0;
}
