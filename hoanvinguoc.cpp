#include <bits/stdc++.h>
using namespace std;
int n,x[100],visited[100];
void inkq(){
    for(int i=1;i<=n;i++){
        cout<<x[i];
    }
    cout<<" ";
}
void backtrack(int pos){
    for(int i=n;i>=1;i--){
        if(visited[i]==0){
            visited[i]=1;
            x[pos]=i;
            if(pos==n){
                inkq();
            }
            else
                backtrack(pos+1);
            visited[i]=0;
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        backtrack(1);
        cout<<endl;
    }
    return 0;
}
