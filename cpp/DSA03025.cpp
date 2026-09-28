#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool cmp(pair<ll,ll> a,pair<ll,ll> b){
    return a.second<b.second;
}
int main(){
    int t;cin>>t;
    while(t--){
        vector<pair<ll,ll>> ab;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            ab.push_back({x,y});
        }
        sort(ab.begin(),ab.end(),cmp);
        int ans=1;
        int x=ab[0].second;
        for(int i=1;i<n;i++){
            if(x<=ab[i].first){
                ans++;
                x=ab[i].second;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
