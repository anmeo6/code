#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1001];
bool visited[1001];
void bfs(int start) {
    queue<int> q;
    memset(visited, false, sizeof(visited));
    q.push(start);
    visited[start] = true;
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for(int v : adj[u]) {
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(1);
}
