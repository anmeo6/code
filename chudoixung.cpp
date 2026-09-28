#include <bits/stdc++.h>
using namespace std;
void doixung(int dp[41][41],int n,string s){
    for(int len=2;len<=n;len++){
        for(int i=0;i<=n-len;i++){
            int j=len+i-1;
            if(s[i]==s[j]){
                dp[i][j]=dp[i+1][j-1];
            }
            else{
                dp[i][j]=min(dp[i+1][j],dp[i][j-1])+1;
            }
        }
    }
    cout<<dp[0][n-1]<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        int dp[41][41]={0};
        string s;
        cin>>s;
        int n=s.length();
        doixung(dp,n,s);
    }
    return 0;
}
