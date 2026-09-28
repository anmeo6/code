#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long so1=0,so2=0;
        for(long long i=0;i<n;i=i+2){
            so1=so1*10+a[i];
        }
        for(long long i=1;i<n;i=i+2){
            so2=so2*10+a[i];
        }
        cout<<so1+so2<<endl;
    }
    return 0;
}