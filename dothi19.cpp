#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t>>n;
    int k=0;
    vector<int> adj[1001];
    vector<int> b;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        for(int j=1;j<=x;j++){
            int y;cin>>y;
            k++;
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
        cout<<n<<" "<<k<<endl;
        vector<pair<int,int>> edge;
        for(int i=1;i<=n;i++){
            for(auto x:adj[i])
                edge.push_back({i,x});
        }
        for(auto x:edge){
            cout<<x.first<<" "<<x.second<<"\n";

        }
    }
    return 0;
}