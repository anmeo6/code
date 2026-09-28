#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000];
vector<int> b;
int cnt=0;
void next(){
    for(int i=1;i<=k;i++){
        cin>>a[i];
        b.push_back(a[i]);
    }
    int i=k;
    while(i>=1 && a[i]==n-k+i){
        i--;
    }
    if(i==0){
        return;
    }
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    }
}
void sosanh(){
    for(auto x:b){
        for(int i=1;i<=k;i++){
            if(x==a[i]){
                cnt++;
            }
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cnt=0;
        b.clear();
        cin>>n>>k;
        next();
        sosanh();
        if(cnt==k){
            cout<<k<<endl;
        }
        else{
            cout<<k-cnt<<endl;
        }
    }
    return 0;
}
