#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n,m;
    cin>>t>>n>>m;
    vector<pair<int,int>> edge;
    vector<int> adj[1001];
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
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