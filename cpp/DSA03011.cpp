#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod=1e9+7;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        priority_queue<ll,vector<ll>,greater<ll>> q;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            q.push(x);
        }
        ll ans=0;
        while(q.size()>1){
            ll x=q.top();q.pop();
            ll y=q.top();q.pop();
            ll res=(x+y)%mod;
            q.push(res);
            ans+=res;
        }
        cout<<ll(ans%mod)<<"\n";
    }
}
