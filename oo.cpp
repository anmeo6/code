#include <bits/stdc++.h>
using namespace std;
int n,a[100];
int cnt=0;
long long f[100];
bool fibo(int b){
    f[0]=f[1]=1;
    for(int i=2;i<93;i++){
        f[i]=f[i-1]+f[i-2];
    }
    for(int i=1;i<93;i++){
        if(b==f[i]){
            return true;
        }
    }
    return false;
}
void inkq(){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void backtrack(int pos){
    for(int i=0;i<=1;i++){
        a[pos]=i;
        if(pos==n){
            cnt++;
            if(fibo(cnt)){
                cout<<cnt<<": ";
                inkq();
            }
        }
        else{
            backtrack(pos+1);
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        backtrack(1);
        cout<<endl;
        cnt=0;
    }
    return 0;
}
