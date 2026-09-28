#include <bits/stdc++.h>
using namespace std;
long long demsouoc(long long n){
    int count=0;
    for(int i=1;i<=n;i++){
        while(n%i==0){
            count++;
            n/=i;
        }
    }
    if(n>1){
        count++;
    }
    return count;
}
int main(){
    const int MOD=1e9 +7;
    long long n;
    cin>>n;
    int A[n];
    int m=1;
    for(int i=0;i<n;i++){
        cin>> A[i];
        m=m*A[i];
    }
    m=m%MOD;
    cout<<demsouoc(m);
}