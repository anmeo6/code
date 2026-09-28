#include<bits/stdc++.h>
using namespace std;
int n,k,x[100];
int cnt=0;
bool snt(int n){
    if(n<2)
        return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void inkq(){
    for(int i=1;i<=k;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
void backtrack(int pos){
    for(int i=x[pos-1]+1;i<=n-k+pos;i++){
        x[pos]=i;
        if(pos==k){
            cnt++;
            if(snt(cnt)){
                cout<<cnt<<": ";
                inkq();
            }
        }
        else
            backtrack(pos+1);
    }
}
int main(){
        cin>>n>>k;
        backtrack(1);
    return 0;
}
