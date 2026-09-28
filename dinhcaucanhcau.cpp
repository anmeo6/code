#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1000];
vector<pair<int,int>> edge;
bool visited[1000];
int cnt;
void dfs(int u){
    cnt++;
    visited[u]=true;
    for(auto x:adj[u]){
        if(!visited[x]){
            dfs(x);
        }
    }
}
void dinhcau(){
    for(auto e:edge){
        for(int i=1;i<=n;i++){
            adj[i].clear();
        }
        memset(visited,false,sizeof(visited));
        for(auto a:edge){
            if(a.first==e.first && a.second==e.second)  continue;
            if(a.first==e.second && a.second==e.first)  continue;
            
            adj[a.first].push_back(a.second);
            adj[a.second].push_back(a.first);
        }
        cnt=0;
        dfs(1);
        if(cnt<n){
            cout<<e.first<<" "<<e.second<<" ";
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        edge.clear();
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            edge.push_back({x,y});
        }
        dinhcau();
        cout<<endl;
    }
    return 0;
}