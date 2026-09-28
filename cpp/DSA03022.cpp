#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long ans=LLONG_MIN;
    ans=max(ans,a[n-1]*a[n-2]);
    ans=max(ans,a[0]*a[1]);
    ans=max(ans,a[1]*a[n-1]*a[0]);
    ans=max(ans,a[n-1]*a[n-2]*a[n-3]);
    cout<<ans;
}
