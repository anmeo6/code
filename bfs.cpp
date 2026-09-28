#include <bits/stdc++.h>
using namespace std;
bool visited[1000]={false};
vector<int>adj[1000];
int n,m,u;
void bfs(int u){
    queue<int> a;
    a.push(u);
    visited[u]=true;
    while(!a.empty()){
        int v=a.front();
        a.pop();
        cout<<v<<" ";
        for(auto x:adj[v]){
            if(visited[x]==false){
                a.push(x);
                visited[x]=true;
            }
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
            adj[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            sort(adj[i].begin(),adj[i].end());
        }
        bfs(u);
        cout<<endl;
    }
}
