#include <bits/stdc++.h>
using namespace std;
int n,u,v;
bool visited[1001]={false};
vector<int> adj[1001];
vector<int> b;
bool dfs(int u){
    b.push_back(u);
    if(u==v){
        return true;
    }
    visited[u]=true;
    for(auto x:adj[u]){
        if(visited[x]==false){
            if(dfs(x))
                return true;
        }
    }
    b.pop_back();
    return false;
}
int main(){
    ifstream cin("TK.INP");
    ofstream cout("TK.OUT");
    int t;cin>>t;
    cin>>n>>u>>v;
    int a[n+1][n+1];
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    if(t==1){
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(a[u][i]==1 && a[i][v]==1){
                cnt++;
            }
        }
        cout<<cnt;
    }
    else if(t==2){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]==1){
                    adj[i].push_back(j);
                }
            }
        }
        for(int i=1;i<=n;i++){
            sort(adj[i].begin(),adj[i].end());
        }
        if(dfs(u)){
            for(auto x:b){
                cout<<x<<" ";
            }
        }
        else {
            cout<<'0';
        }
    }
}