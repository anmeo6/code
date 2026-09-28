#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool visited[1001];
int n,m;
void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u]=true;
    while(!q.empty()){
        int v=q.front();
        q.pop();
        for(auto x:adj[v]){
            if(!visited[x]){
                visited[x]=true;
                q.push(x);
            }
        }
    }
}
int tplt(){
    int dem=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dem++;
            bfs(i);
        }
    }
    return dem;
}
int main(){
    int t;
    cin>>t;
    while(t--){
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
        int cnt=tplt();
        cout<<cnt<<endl;
    }
    return 0;
}
