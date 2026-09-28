#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll songuyentothuk( ){
    ll n,k;
    ll count=0;
    cin>>n>>k;
    if(n<2){
        return -1;
    }
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            count++;
            if(count==k){
                return i;
                break;
            }
            n/=i;
        }
    }
    if(n>1){
        count++;
        if(count==k)    return n;
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<songuyentothuk()<<endl;
    }
    return 0;
}