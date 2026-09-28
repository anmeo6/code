#include<bits/stdc++.h>
using namespace std;vector<int>adj[1001];int p=0;
int n;int a[1001][1001];bool visited[1001];
void dfs(int u){
    adj[p].push_back(u);
    visited[u]=true;
    for(int i=1;i<=n;i++){
        if(a[u][i]==1 && !visited[i]){
            dfs(i);
        }
    }
}
int tplt(){
    int cnt=0;
    memset(visited, false,sizeof(visited));
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            ++cnt;
            p++;
            dfs(i);
        }
    }
    return cnt;
}
int main(){
    ifstream inp("TK.INP");
    ofstream out("TK.OUT");
    inp>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            inp>>a[i][j];
        }
    }
    int cnt=tplt();
    out<<cnt<<endl;
    for(int i=1;i<=p;i++){
        for(auto x:adj[i])  out<<x<<" ";
        out<<endl;
    }
    inp.close();
    out.close();
    return 0;
}
