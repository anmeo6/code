#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        priority_queue<ll> q;
        priority_queue<ll,vector<ll>,greater<ll>> p;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            q.push(x);
        }
        for(int i=0;i<n;i++){
            ll y;cin>>y;
            p.push(y);
        }
        ll ans=0;
        while(!q.empty()){
            ll x=q.top();q.pop();
            ll y=p.top();p.pop();
            ans+=(x*y);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
