#include <bits/stdc++.h>
using namespace std;
int n,a[1000],b[1000];
int cnt;
bool visited[1000];
bool kiemtra(){
    for(int i=1;i<=n;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
void backtrack(int pos){
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            visited[i]=1;
            a[pos]=i;
            if(pos==n){
                if(kiemtra()){
                    cout<<cnt;
                }
                else    cnt++;
            }
            else{
                backtrack(pos+1);
            }
            visited[i]=0;
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cnt=1;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin >>b[i];
        }
        backtrack(1);
        cout<<endl;
    }
}
