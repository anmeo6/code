#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll thapphan(string n){
    ll tp=0;
    for(size_t i=0;i<n.length();i++){
        char c=n[i];
        tp=(tp*2 + (c-'0'))%5;
    }
    return tp;
}
int main(){
    string n;
    cin>>n;
    if(thapphan(n)==0)    cout<<"YES";
    else    cout<<"NO";
}