#include <bits/stdc++.h>
using namespace std;
int n,m,u,o,cnt;
vector<int> adj[1001];
int parent[1001];
bool visited[1001]={false};bool found=false;
void bfs(int u){
    queue<int> v;v.push(u);visited[u]=true;parent[u]=-1;
    while(!v.empty()){
        int s=v.front();
        v.pop();
        if(s==o){
            return;
        }
        for(auto x:adj[s]){
            if(visited[x]==false){
                visited[x]=true;
                parent[x]=s;
                v.push(x);
            }
        }
    }
}
int main(){
    int t;cin>>t;while(t--){
        cin>>n>>m>>u>>o;
        for(int i=1;i<=n;i++){
            adj[i].clear();
            visited[i]=false;
        }
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
        }
        bfs(u);
        if(visited[o]==false)  cout<<"-1"<<endl;
        else{
            vector<int> path;
            for(int i=o;i!=-1;i=parent[i])
                path.push_back(i);
            reverse(path.begin(),path.end());
            for(auto x: path)   cout<<x<<" ";
            cout<<endl;
        }
    }
    return 0;
}
