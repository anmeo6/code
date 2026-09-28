#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
int n,m,u;
bool visited[1001]={false};
void dfs(int u){
    cout<<u<<" ";
    visited[u]=true;
    for(auto x:adj[u]){
        if(visited[x]==false){
            dfs(x);
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m>>u;
        for(int i=1;i<=n;i++){
            adj[i].clear();
            visited[i]=false;
        }
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
        }
        dfs(u);
        cout<<endl;
    }
}
