#include <bits/stdc++.h>
using namespace std;
int n,m,cnt=0;
int main(){
    char a[1001][1001];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='#'){
                cnt=cnt+1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='#'&&a[i][j+1]=='#'){
                cnt=cnt-1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='#'&&a[i+1][j]=='#'){
                cnt--;
            }
        }
    }
    cout<<cnt;
}
