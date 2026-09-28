#include<iostream>
#include<cmath>
using namespace std;
void nguyento(long long n){
    if(n<2) return;
    for(long long i=2;i<=sqrt(n);i++){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>1)    cout<<n;
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