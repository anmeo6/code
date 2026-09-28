#include <bits/stdc++.h>
using namespace std;
int n,m;
bool visited[100001];
vector<int> a[100001];
vector<int> adj[100001];
void dfs(int u,int x){
    a[x].push_back(u);
    visited[u]=true;
    for(auto v:adj[u]){
        if(!visited[v]){
            dfs(v,x);
        }
    }
}
void sotplt(){
    memset(visited,false,sizeof(visited));
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfs(i,i);
        }
    }
}
int main(){
    cin>>n>>m;
    int k=0;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    sotplt();
    int l=a[1].size();
    for(int i=2;i<=n;i++){
        int o=a[i].size();
        k=max(k,o);
    }
    cout<<l+k;
}
