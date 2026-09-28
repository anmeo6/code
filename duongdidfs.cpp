#include <bits/stdc++.h>
using namespace std;
int n,m,u,o;int c=0;
vector<int> adj[1001];vector<int>a;
bool visited[1001]={false};
bool found=false;
void dfs(int u){
    if(found)   return;
    a.push_back(u);
    visited[u]=true;
    if(u==o){
        found=true;
        return;
    }
    for(int v:adj[u]){
        if(!visited[v]){
            dfs(v);
            if(found)   return;
        }
    }
    a.pop_back();
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m>>u>>o;
        a.clear();
        found=false;
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
        if(!found)    cout<<"-1";
        else{
            for(auto k:a)   cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}
