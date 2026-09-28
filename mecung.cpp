#include <bits/stdc++.h>
using namespace std;
int n,a[100][100];
vector<string> res;
bool check=false;
void input(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    res.clear();
    check=false;
}
void Try(int i, int j, string s){
    if(i==0 && j==0 &&a[i][j]==0){
        check=false;
        return;
    }
    if(i==n-1 && j==n-1 && a[i][j]==1){
        res.push_back(s);
        check=true;
        return;
    }
    if(i<n && j<n && a[i+1][j]){
        Try(i+1,j,s+"D");
    }
    if(i<n && j<n && a[i][j+1]){
        Try(i,j+1,s+"R");
    }
    if(i<n && j<n && a[i+1][j]==0 && a[i][j+1]==0 || i>=n ||j>=n){
        return;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        input();
        Try(0,0,"");
        if(check==false){
            cout<<"-1"<<'\n';
        }
        else{
            for(int i=0;i<res.size();i++){
                cout<<res[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
