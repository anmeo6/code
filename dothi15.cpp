#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;
    cin>>t>>n>>m;
    vector<pair<int,int>> edge;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        edge.push_back({x,y});
    }
    if(t==1){
        for(int i=1;i<=n;i++){
            int cnt1=0,cnt2=0;
            for(auto x:edge){
                if(x.first==i){
                    cnt2++;
                }
                else if(x.second==i){
                    cnt1++;
                }
            }
            cout<<cnt1<<" "<<cnt2<<"\n";
        }
    }
    if(t==2){
        int mx[n+1][n+1];
        memset(mx,0,sizeof(mx));
        for(auto x:edge){
            mx[x.first][x.second]=1;
        }
        cout<<n<<endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<mx[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}