#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t>>n;
    vector<int> adj[1001];
    vector<int> b;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        for(int j=1;j<=x;j++){
            int y;cin>>y;
            adj[i].push_back(y);
            b.push_back(y);
        }
    }
    if(t==1){
        vector<int>c;
        for(int i=1;i<=n;i++){
            int cnt=0;
            for(auto x:b){
                if(x==i){
                    cnt++;
                }
            }
            c.push_back(cnt);
        }
        for(int i=1;i<=n;i++){
            cout<<c[i-1]<<" "<<adj[i].size()<<endl;
        }
    }
    else if(t==2){
        int mx[n+1][n+1];
        memset(mx,0,sizeof(mx));
        for(int i=1;i<=n;i++){
            for(auto x:adj[i]){
                mx[i][x]=1;
            }
        }
        cout<<n<<"\n";
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<mx[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}