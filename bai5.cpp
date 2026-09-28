#include <bits/stdc++.h>
using namespace std;
int A,B,C;
double x;
double f(double x){
    return A*x*x*x+B*x-C;
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>A>>B>>C;
        double l=-1e6,r=1e6;
        for(int i=l;i<=r;i++){
            double k=(l+r)/2;
            if(f(k)>0){
                r=k;
            }
            else
                l=k;
        }
        cout<<fixed<<setprecision(4)<<(l+r)/2<<endl;
    }
}
