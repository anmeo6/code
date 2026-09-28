#include <bits/stdc++.h>
using namespace std;
int n,a[100],b[100];
bool visited[1000];
void backtrack(int pos){
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            visited[i]=1;
            a[pos]=i;
            if(pos==n){
                for(int i=1;i<=n;i++){
                    cout<<b[a[i]-1]<<" ";
                }
                cout<<endl;
            }
            else
                backtrack(pos+1);
            visited[i]=0;
        }
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)    cin>>b[i];
    sort(b,b+n);
    backtrack(1);
    return 0;
}
