#include <bits/stdc++.h>
using namespace std;
int main(){
    ifstream cin("DT.INP");
    ofstream cout("DT.OUT");
    int t;cin>>t;
    int n;
    cin>>n;
    int matrix[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>matrix[i][j];
        }
    }
    if(t==1){
        for(int i=1;i<=n;i++){
            int cnt=0;
            for(int j=1;j<=n;j++){
                if(matrix[i][j]>0 && matrix[i][j]<1000){
                    cnt++;
                }
            }
            cout<<cnt<<" ";
        }
    }
    if(t==2){
        int cnt=0;
        vector<tuple<int,int,int>> adj;
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
                if(i<j && matrix[i][j]<1000 && matrix[i][j]> 0){
                    adj.push_back({i,j,matrix[i][j]});
                    cnt++;
                }
            }
        }
        cout<<n<<" "<<cnt<<endl;
        for(auto [a,b,c]:adj){
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
    return 0;
}