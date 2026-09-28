#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000];
void next(){
    for(int i=1;i<=k;i++)   cin>>a[i];
    int i=k;
    while(i>=1 && a[i]==n-k+i){
        i--;
    }
    if(i==0){
        for(int j=n;j>=k;j--){
            cout<<j<<" ";
        }
    }
    else{
        a[i]++;
        for(int j=i+1;j<=n;j++){
            a[j]=a[j-1]+1;
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        next();
        for(int i=1;i<=k;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
