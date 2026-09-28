#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;
    cin>>t;
    if(t==1){
        cin>>n>>m;
        vector<pair<int,int>> edges;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            edges.push_back({x,y});
        }
        for(int i=1;i<=n;i++){
            int cnt=0;
            for(auto x:edges){
                if(x.first==i)    cnt++;
                else if(x.second==i)   cnt++;
            }
            cout<<cnt<<" ";
        }
    }
    else if(t==2){
        cin>>n>>m;
        int a[n][n];
        memset(a,0,sizeof(a));
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            a[x-1][y-1]=1;
            a[y-1][x-1]=1;
        }
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
