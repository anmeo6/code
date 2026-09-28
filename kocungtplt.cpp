#include <bits/stdc++.h>
using namespace std;
int n,m;vector<int> b;
bool visited[301];
vector<int> a[301];
vector<int> adj[301];
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
    int k=-1e7;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    sotplt();
    for(int i=2;i<=n;i++){
        for(auto x:a[i]){
            b.push_back(x);
        }
    }
    sort(b.begin(),b.end());
    for(auto y:b)   cout<<y<<endl;
    if(b.empty())   cout<<0;
    return 0;
}
