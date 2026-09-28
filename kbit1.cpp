#include <bits/stdc++.h>
using namespace std;
int n,k,a[10001];
int cnt=0;
void inkq(){
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<" ";
}
bool duyet1(){
    for(int i=1;i<=n;i++){
        if(a[i]==1){
            cnt++;
        }
    }
    if(cnt!=k){
        return false;
    }
    return true;
}
void backtrack(int pos){
    for(int i=0;i<=1;i++){
        a[pos]=i;
        if(i==1)
            cnt++;
        if(pos==n){
            if(cnt==k){
                for(int i=1;i<=n;i++){
                    cout<<a[i];
                }
                cout<<endl;
            }
        }
        else
            backtrack(pos+1);
        if(i==1)
            cnt--;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        backtrack(1);
    }
}
