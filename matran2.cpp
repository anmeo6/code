#include <bits/stdc++.h>
using namespace std;
int matr[1000][1000];
int dp[1000][1000];
int n;int m;
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>matr[i][j];
            }
        }
        for(int i=1;i<=n;i++)   dp[i][1]=1;
        for(int j=1;j<=m;j++)   dp[1][j]=1;
        for(int i=2;i<=n;i++){
            for(int j=2;j<=m;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        cout<<dp[n][m]<<endl;
    }
    return 0;
}
