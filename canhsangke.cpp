#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        vector<pair<int , int>> a;
        vector<int>adj[1000];
        a.clear();
        int n,m;cin>>n>>m;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            a.push_back({x,y});
        }
        for(auto k:a){
            for(int i=1;i<=n;i++){
                if(k.first==i){
                    adj[i].push_back(k.second);
                }
                else if(k.second==i){
                    adj[i].push_back(k.first);
                }
            }
        }
        for(int i=1;i<=n;i++){
            cout<<i<<": ";
            for(int c: adj[i]){
                cout<<c<<" ";
            }
            cout<<endl;
        }
    }
}
