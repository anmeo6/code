#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool visited[1001];
vector<int> parent;
int n,m,s,e;
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u]=true;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(auto x:adj[v]){
            if(!visited[x]){
                parent[x]=v;
                visited[x]=true;
                q.push(x);
            }
        }
    }
}
void duong_di(int s,int e,vector<int> parent){
    vector<int> path;
    int bo=parent[e];
    path.push_back(e);
    while(bo!=-1){
        path.push_back(bo);
        if(bo==s){
            break;
        }
        bo=parent[bo];
    }
    for(int i=path.size()-1;i>=0;i--){
        cout<<path[i]<<" ";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m>>s>>e;
        for(int i=1;i<=n;i++){
            adj[i].clear();
            visited[i]=false;
        }
        parent.resize(n+1);
        parent.assign(n+1,-1);
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bfs(s);
        duong_di(s,e,parent);
        cout<<'\n';
    }
    return 0;
}
