#include <bits/stdc++.h>
using namespace std;
int n,a[100],b[]={6,8};
bool kiemtra(){
    for(int i=1;i<=n;i++){
        if(a[1]!=8 || a[n]!=6)
            return false;
    }
    for(int i=1;i<=n-1;i++){
        if(a[i]==8 && a[i+1]==8)
            return false;
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(a[i]==6){
            cnt++;
            if(cnt>3)   return false;
        }
        else{
            cnt=0;
        }
    }
    return true;
}
void backtrack(int pos){
    for(int i=1;i<=2;i++){
        a[pos]=b[i-1];
        if(pos==n){
            if(kiemtra()){
                for(int i=1;i<=n;i++)
                    cout<<a[i];
                cout<<endl;
            }
        }
        else{
            backtrack(pos+1);
        }
    }
}
int main(){
    cin>>n;
    backtrack(1);
    return 0;
}
