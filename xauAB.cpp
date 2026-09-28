#include <bits/stdc++.h>
using namespace std;
int n; char a[10001];
void inkq(){
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<" ";
}
void backtrack(int pos){
    for(char i='A';i<='B';i++){
        a[pos]=i;
        if(pos==n){
            inkq();
        }
        else{
            backtrack(pos+1);
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
