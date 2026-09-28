#include <bits/stdc++.h>
using namespace std;
int n,a[1001];
int k=0;
int cnt=1;
bool visited[1000];
vector<int> b;
void backtrack(int pos){
    for(int i=1;i<=n;i++){
        if(!visited){
            visited[i]=1;
            a[pos]=i;
            b.push_back(a[pos]);
            if(pos==n){
                sosanh();
                if(k==0){
                    cout<<cnt;
                }
                else{
                    cnt++
                }
            }
            else{
                backtrack(pos+1);
            }
            visited[i]=0;
        }
    }
}
void sosanh(){
    for(int i=1;i<=n;i++){
        if(a[i]==b[i-1]){
            k=0;
        }
        else{
            k=1;
        }
    }
int main(){
    int t;cin>>t;
    while(t--){
        cnt=0;
        b.clear();
        cin>>n;
        backtrack(1);
    }
}
