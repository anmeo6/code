#include <iostream>
using namespace std;
int n,k,x[100];
void inkq(){
    for(int i=1;i<=k;i++){
        cout<<x[i];
    }
    cout<<" ";
}
void backtrack(int pos){
    for(int i=x[pos-1]+1;i<=n-k+pos;i++){
        x[pos]=i;
        if(pos==k)
            inkq();
        else
            backtrack(pos+1);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>k;
        backtrack(1);
        cout<<endl;
    }
    return 0;
}
