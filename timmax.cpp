#include <bits/stdc++.h>
using namespace std;
int main(){
    int const mod=1e9+7;
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long>a;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        int k=0;int max=0;
        for(auto x:a){
            max=(max+x*k)%mod;
            k++;
        }
        cout<<max<<endl;
    }
    return 0;
}

