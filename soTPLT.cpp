#include <bits/stdc++.h>
using namespace std;
int n,m;vector<int> adj[50001];
bool visited[50001];
void dfs(int u,int x){
    visited[u]=true;
    for(int v:adj[u]){
        if(!visited[v]&& v!=x){
            dfs(v,x);
        }
    }
}
void sotplt(int x){

    int cnt=0;
    memset(visited,false,sizeof(visited));
    for(int i=1;i<=n;i++){
        if(!visited[i]&& i!=x){
            ++cnt;
            dfs(i,x);
        }
    }
    cout<<cnt<<endl;
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        sotplt(i);
    }
    return 0;
}
