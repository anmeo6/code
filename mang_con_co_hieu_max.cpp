#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<ll> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x=min(m,n-m);
        sort(a.begin(),a.end());
        ll so1=0,so2=0;
        for(int i=0;i<x;i++){
            so1+=a[i];
        }
        for(int i=x;i<n;i++){
            so2+=a[i];
        }
        cout<<so2-so1<<endl;
    }
    return 0;
}