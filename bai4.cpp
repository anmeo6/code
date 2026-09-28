#include <bits/stdc++.h>
using namespace std;
long long p,a[10000];
long long n;
vector <long long>b;
void timtich(long long p){
    for(int i=9;i>=2;i--){
        while(p%i==0){
            b.push_back(i);
            p=p/i;
        }
    }
    if(p!=1){
        cout<<"-1";
        return;
    }
    sort(b.begin(),b.end());
    for(int x:b){
        cout<<x;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>p;
        if(p>=1 && p<=9){
            cout<<p;
        }
        else{
            timtich(p);
        }
        b.clear();
        cout<<endl;
    }
}
