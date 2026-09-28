#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001];
int cnt=0;
bool snt(int n){
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)  return false;
    }
    return true;
}
void Try(int pos){
    for(int i=a[pos-1]+1;i<=n-k+pos;i++){
        a[pos]=i;
        if(pos==k){
            cnt++;
            if(snt(cnt)){
                cout<<cnt<<": ";
                for(int j=1;j<=k;j++){
                    cout<<a[j]<<" ";
                }
                cout<<'\n';
            }
        }
        else
            Try(pos+1);
    }
}
int main(){
    cin>>n>>k;
    a[0]=0;
    Try(1);
}
