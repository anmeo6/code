#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
int n,m,q;
bool found=false,visited[1001]={false};
void dfs(int u, int o){
    if(found)   return;
    visited[u]=true;
    if(u==o){
        found=true;
        return;
    }
    for(auto x:adj[u]){
        if(visited[x]==false){
            dfs(x,o);
            if(found)   return;
        }
    }
}
int main(){
    int t;cin>>t;while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            adj[i].clear();
            visited[i]=false;
        }
        for(int i=1;i<=m;i++){
            int x,y;cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        cin>>q;
        for(int i=1;i<=q;i++){
            int u,v;cin>>u>>v;
            found=false;
            for(int j=1;j<=n;j++)   visited[j]=false;
            dfs(u,v);
            if(!found)  cout<<"NO";
            else    cout<<"YES";
            cout<<endl;
        }
    }
    return 0;
}
