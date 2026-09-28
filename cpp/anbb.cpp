//MA TRẬN KỀ SANG DANH SÁCH CẠNH
#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[1001][1001];
vector<pair<int,int>> edge;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j =1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j =i+1;j<=n;j++){
            if(a[i][j]==1 ){
                edge.push_back({i,j});
            }
        }
    }
    for(auto it : edge){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
