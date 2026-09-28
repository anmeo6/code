#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1001];
bool visited[1001];
int cnt=0;
int check=1;
void dfs(int u,int s){
    visited[u]=true;
    cnt++;
    if(cnt>2){
        for(auto x:adj[u]){
            if(x==s){
                check=0;
                return;
            }
        }
    }
    for(auto v:adj[u]){
        if(!visited[v]){
            dfs(v,s);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            adj[i].clear();
        }
        check=1;
        cnt=0;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i=1;i<=n;i++){
            memset(visited,false,sizeof(visited));
            cnt=0;
            dfs(i,i);
            if(check==0){
                cout<<"YES"<<endl;
                break;
            }
        }
        if(check==1)    cout<<"NO"<<"\n";
    }
    return 0;
}
