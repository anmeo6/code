#include <bits/stdc++.h>
using namespace std;
int n,a[1001];
bool visited[1001];
int cnt=1;
void backtrack(int pos){
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            visited[i]=true;
            a[pos]=i;
            if(pos==n){
                cout<<cnt<<": ";
                for(int j=1;j<=n;j++){
                    cout<<a[j]<<" ";
                }
                cnt++;
                cout<<endl;
            }
            else{
                backtrack(pos+1);
            }
            visited[i]=false;
        }
    }
}
int main(){
    cin>>n;
    backtrack(1);
    return 0;
}
