#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool cmp(pair<ll,ll> a,pair<ll,ll>b){
    return a.second<b.second;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<ll,ll>> cv;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            cv.push_back({x,y});
        }
        sort(cv.begin(),cv.end(),cmp);
        int ans=1;
        ll x=cv[0].second;
        for(int i=1;i<n;i++){
            if(x<=cv[i].first){
                ans++;
                x=cv[i].second;
            }
        }
        cout<<ans<<endl;
    }
}
