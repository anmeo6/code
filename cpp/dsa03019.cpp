#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll ucln(ll p,ll q){
    if(q==0)    return p;
    return ucln(q,p%q);
}
int main(){
    int t;cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        while(n!=0){
            if(m%n==0){
                cout<<"1/"<<(m/n);
                break;
            }
            ll x=(m+n-1)/n;
            cout<<"1/"<<x;
            n= n*x-m;
            m=m*x;
            ll g=ucln(n,m);
            n/=g;
            m/=g;
            if(n!=0)    cout<<" + ";
        }
        cout<<"\n";
    }
}
