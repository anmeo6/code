#include <bits/stdc++.h>
using namespace std;
int n,a[1001];
void next(){
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int i=n-1;
    while(i>=1 && a[i]>=a[i+1]){
        i--;
    }
    if(i==0){
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
    }
    else{
        int j=n;
        while(a[j]<=a[i]){
            j--;
        }
        swap(a[i],a[j]);
        sort(a+i+1,a+n+1);
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        next();
        cout<<endl;
    }
    return 0;
}
