#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1001];
int n,u;int parent[1001];
int matrix[1001][1001];
bool visited[1001];
void hamilton(int pos){
    if(pos==n+1){
        if(matrix[parent[n]][u]==1){
            for(int i=1;i<=n;i++){
                cout<<path[i]<<" ";
            }
            cout<<u<<endl;
            cnt++;
        }
    }
}
int main(){
    cin>>n>>u;
    memset(visited,false,sizeof(visited));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>matrix[i][j];
        }
    }
    parent[1]=u;
    hamilton(u,u);
}
