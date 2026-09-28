#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n;
    cin>>n;
    ll a[n+1];
    vector<ll>pos(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        pos[a[i]]=i;
    }
    ll cur=1;ll mx=1;
    for(int i=2;i<=n;i++){
        if(pos[i-1]<pos[i]){
            cur++;
        }
        else{
            cur=1;
        }
        mx=max(mx,cur);
    }
    cout<<ll(n-mx);
}
