#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll boiso(ll n){
    ll m;
    for(int i=1;i<=1000000000;i++){
        m=n*i;
        ll a=sqrt(m);
        if(a*a==m){
            break;
        }
    }
    return m;
}
int main(){
    int n;
    cin>>n;
    cout<<boiso(n);
}