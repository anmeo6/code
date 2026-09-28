#include <bits/stdc++.h>
using namespace std;
int n,a[1001],k=0,cnt=0;
bool visited[1000]; vector<int> b;
void sosanh(){
    for(int i=1;i<=n;i++){
        if(a[i]!=b[i-1])    k=1;
    }
}
void backtrack(int pos){
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            visited[i]=1;
            a[pos]=i;
            if(pos==n){
                sosanh();
                if(k==0)    cout<<cnt;
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
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>i;
        b.push_back(i);
    }
    backtrack(1);
    return 0;
}
