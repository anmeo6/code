#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000],b[1000];int cnt;
bool kiemtra(){
    for(int i=1;i<=k;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
void backtrack(int pos){
    for(int i=a[pos-1]+1;i<=n+pos-k;i++){
        a[pos]=i;
        if(pos==k){
            if(kiemtra()){
                cout<<cnt;
            }
            else    cnt++;
        }
        else
            backtrack(pos+1);
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cnt=1;
        cin>>n>>k;
        for(int i=1;i<=k;i++){
            cin>>b[i];
        }
        backtrack(1);
        cout<<endl;
    }
}
