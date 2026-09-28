#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1000];
bool visited[1000];
void dfs(int u){
    cout<<u<<" ";
    visited[u]=true;
    for(int x:adj[u]){
        if(visited[x]==false){
            dfs(x);
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,m,u;
        cin>>n>>m>>u;
        for(int i=1;i<=n;i++){
            adj[i].clear();
            visited[i]=false;
        }
        for(int i=1;i<=m;i++){
            int x,y;cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            sort(adj[i].begin(),adj[i].end());
        }
        dfs(u);
        cout<<endl;
    }
    return 0;
}
