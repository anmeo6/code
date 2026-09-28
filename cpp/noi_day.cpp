#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        priority_queue<ll,vector<ll>,greater<ll>>q;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            q.push(x);
        }
        ll sum=0;
        while(q.size()>1){
            ll x=q.top();q.pop();
            ll y=q.top();q.pop();
            ll res=x+y;
            sum+=res;
            q.push(res);
        }
        cout<<sum<<endl;
    }
}
