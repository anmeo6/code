#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> edges;
vector<int> adj[1000];
bool visited[1000]={false};
int cnt,n,m;
void dfs(int u){
    visited[u]=true;
    cnt++;
    for(auto x:adj[u]){
        if(visited[x]==false){
            dfs(x);
        }
    }
}
void bridge(){
    for(auto e:edges){
        for(int i=1;i<=n;i++){
        adj[i].clear();
        visited[i]=false;
        }
        for(auto x:edges){
            if(x.first==e.second && x.second==e.first)   continue;
            if(x.first==e.first && x.second==e.second)   continue;

            adj[x.first].push_back(x.second);
            adj[x.second].push_back(x.first);
        }
        cnt=0;
        dfs(1);
        if(cnt<n){
            cout<<e.first<<" "<<e.second<<" ";
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        edges.clear();
        for(int i=1;i<=m;i++){
            int x, y;
            cin>>x>>y;
            edges.push_back({x,y});
        }
        bridge();
        cout<<endl;
    }
    return 0;
}
