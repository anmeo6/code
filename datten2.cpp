#include <bits/stdc++.h>
using namespace std;
int n,k,a[100];
char c[100];
void backtrack(int pos){
    if(pos>k){
        for(int i=1;i<=k;i++){
            c[i]='A'-1+a[i];
            cout<<c[i];
        }
        cout<<endl;
    }
    else{
        for(int i=a[pos-1]+1;i<=n-k+pos;i++){
            a[pos]=i;
            backtrack(pos+1);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        a[0]=0;
        backtrack(1);
    }
    return 0;
}
