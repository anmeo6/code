#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream cin("DT.INP");
    ofstream cout("DT.OUT");
    int t;cin>>t;
    int n,m;
    if(t==1){
        vector<pair<int ,int>> edge;
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            edge.push_back({x,y});
        }
        for(int i=1;i<=n;i++){
            int cnt=0;
            for(auto x:edge){
                if(x.first==i)  cnt++;
                else if(x.second==i) cnt++;
            }
            cout<<cnt<<" ";
        }
    }
    else if(t==2){
        cin>>n>>m;
        int a[n+1][m+1];
        vector<pair<int,int>> adj;
        memset(a,0,sizeof(a));
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            adj.push_back({x,y});
        }
        int k=1;
        for(auto x:adj){
            a[x.first][k]=a[x.second][k]=1;
            ++k;
        }
        cout<<n<<" "<<m<<endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
