#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream cin("DT.INP");
    ofstream cout("DT.OUT");
    int t;
    cin>>t;
    int n,m;
    cin>>n>>m;
    vector<tuple<int,int,int>> adj;
    for(int i=1;i<=m;i++){
        int x,y,z;
        cin>>x>>y>>z;
        adj.push_back({x,y,z});
    }
    if(t==1){
        for(int i=1;i<=n;i++){
            int cnt=0;
            for(auto [a,b,c]: adj){
                if(a==i || b==i){
                    cnt++;
                }
            }
            cout<<cnt<<" ";
        }
    }
    if(t==2){
        int matrix[n+1][n+1];
        memset(matrix,0,sizeof(matrix));
        for(auto [a,b,c]:adj){
            matrix[a][b]=matrix[b][a]=c;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j)    matrix[i][j]=0;
                else if(i!=j && matrix[i][j]==0){
                    matrix[i][j]=10000;
                }
            }
        }
        cout<<n<<endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}