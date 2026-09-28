#include <bits/stdc++.h>
using namespace std;
int main(){

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
        vector<int> adj[101];
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        cout<<n<<endl;
        for(int i=1;i<=n;i++){
            cout<<adj[i].size()<<" ";
            for(auto x:adj[i]){
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
