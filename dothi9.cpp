#include <bits/stdc++.h>
using namespace std;
int main(){
    //ifstream cin("DT.INP");
    //ofstream cout("DT.OUT");
    int t;cin>>t;
    int n,m;
    if(t==1){
        cin>>n;
        vector<int> deg;
        for(int i=0;i<n;i++){
            int m;cin>>m;
            deg.push_back(m);
            for(int j=0;j<m;j++){
                int x;cin>>x;
            }
        }
        for(auto x:deg) cout<<x<<" ";
    }
    else if(t==2){
        cin>>n;int cnt=0;
        vector<pair<int,int>> edge;
        int matrix[n+1][1001];
        memset(matrix,0,sizeof(matrix));
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            for(int j=0;j<m;j++){
                int x;cin>>x;
                if(i+1<x){
                    edge.push_back({i+1,x});
                    cnt++;
                }
            }
            int k=0;
            for(auto x:edge){
                matrix[x.first-1][k]=matrix[x.second-1][k]=1;
                ++k;
            }
        }
        cout<<n<<" "<<cnt<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<cnt;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}