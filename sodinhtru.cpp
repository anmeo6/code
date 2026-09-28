#include <bits/stdc++.h>
using namespace std;
int a[1001][1001];
int n;
vector<int> b;
bool visited[1001];
dfs(int u){
    visited[u]=true;
    for(int v=1;v<=n;v++){
        if(a[u][v]==1 && !visited[v]){
            dfs(v);
        }
    }
}
void dinhtru(){
    int tplt=0;
    int ans=0;
    memset(visited,false,sizeof(visited));
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            ++tplt;
            dfs(i);
            cout<<endl;
        }
    }
    for(int i=1;i<=n;i++){
        memset(visited,false,sizeof(visited));
        visited[i]=true;
        int dem=0;
        for(int j=1;j<=n;j++){
            if(!visited[j]){
                ++dem;
                dfs(j);
            }
        }
        if(dem>tplt){
            b.push_back(i);
            ++ans;
        }
    }
    cout<<"dinh tru: ";
    for(int x:b){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"so dinh tru: "<<ans<<endl;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    dinhtru();
}
