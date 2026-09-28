#include <iostream>
using namespace std;
int n,x[100];
void inkq(){
    for(int i=1;i<=n;i++){
        cout<<x[i];
    }
    cout<<endl;
}
void backtrack(int pos){
    for(int i=0;i<=1;i++){
        x[pos]=i;
        if(pos==n)
            inkq();
        else
            backtrack(pos+1);
    }
}
int main(){
    cin>>n;
    backtrack(1);
    return 0;
}
