#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool cmp(pair<ll,ll> a,pair<ll,ll>b){
    return a.second>b.second;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<pair<ll,ll>> cv;
        for(int i=0;i<n;i++){
            ll x,y,z;
            cin>>x>>y>>z;
            cv.push_back({y,z});
        }
        sort(cv.begin(),cv.end(),cmp);
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            int x=cv[i].first;
            mx=max(mx,x);
        }
        vector<int> slot(mx+1,0);
        int i=0;
        int job=0,profit=0;
        for(int i=0;i<n;i++){
            for(int j=mx;j>=1;j--){
                if(slot[j]==0 && cv[i].first>=j){
                    slot[j]=1;
                    job++;
                    profit+=cv[i].second;
                    break;
                }
            }
        }
        cout<<job<<" "<<profit<<"\n";
    }
}
