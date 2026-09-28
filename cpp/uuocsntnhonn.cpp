#include <bits/stdc++.h>
using namespace std;
long long nguyento(long long n){
    if (n<2)    return 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)  return 0;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin >>n;
        for(int i=2;i<=n;i++){
            if(nguyento(i)){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}