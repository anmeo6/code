#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[1001][1001];
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
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(a[i][j]==1){
                adj[i].push_back(j);
            }
        }
    }
    bfs(1);
}

