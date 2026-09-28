#include<bits/stdc++.h>
using namespace std;
void nguyento(long long n){
    if(n<2) return;
    long long i,m=-1;
    long long max=LLONG_MIN;
    for(i=2;i<=sqrt(n);i++){
        while(n%i==0){
            m=i;
            n=n/i;
            if(m>max){
                max=m;
            }
        }
    }
    if(n>1 && n> max)   max=n;
    cout <<max;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        nguyento(n);
        cout<<endl;
    }
}