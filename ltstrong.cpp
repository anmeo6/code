#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1001],rev_adj[1001];
bool visited[1001];
void dfs(int u,vector<int>a[]){
    visited[u]=true;
    for(auto x:adj[u]){
        if(!visited[x]){
            dfs(x,a);
        }
    }
}
bool tpltmanh(){
    memset(visited,false,sizeof(visited));
    dfs(1,adj);
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            return false;
        }
    }
    memset(visited,false,sizeof(visited));
    dfs(1,rev_adj);
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            adj[i].clear();
            rev_adj[i].clear();
        }
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            rev_adj[y].push_back(x);
        }
        if(tpltmanh()){
            cout<<"YES";
        }
        else    cout<<"NO";
        cout<<'\n';
    }
    return 0;
}
