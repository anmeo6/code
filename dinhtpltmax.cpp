#include <bits/stdc++.h>
using namespace std;
int n,m;vector<int> adj[50001];vector<int> b;
bool visited[50001];
void dfs(int u,int x){
    visited[u]=true;
    for(int v:adj[u]){
        if(!visited[v]&& v!=x){
            dfs(v,x);
        }
    }
}
int sotplt(int x){

    int cnt=0;
    memset(visited,false,sizeof(visited));
    for(int i=1;i<=n;i++){
        if(!visited[i]&& i!=x){
            ++cnt;
            dfs(i,x);
        }
    }
    return cnt;
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            adj[i].clear();
        }
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int o=0,k;
        for(int i=1;i<=n;i++){
            int cnt=sotplt(i);
            if(o<cnt){
                o=cnt;
                k=i;
            }
        }
        if(o==1)    cout<<"0"<<endl;
        else    cout<<k<<endl;
    }
    return 0;
}
