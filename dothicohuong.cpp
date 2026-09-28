#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<int> adj[1000];
        vector<pair<int,int>> edges;
        for(int i=1;i<=m;i++){
            int x,y;cin>>x>>y;
            edges.push_back({x,y});
        }
        for(auto x:edges){
            adj[x.first].push_back(x.second);
        }
        for(int i=1;i<=n;i++){
            cout<<i<<": ";
            for(auto k:adj[i]){
                cout<<k<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
