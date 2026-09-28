#include<iostream>
#include<cmath>
using namespace std;
long long gcd(long long a,long long b){
    if(b==0)    return a;
    else    return gcd(b,a%b);
}
long long lcm(long long a, long long b){
    return ((a*b)/gcd(a,b));
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        long long bcnn=1;
        for(int i=2;i<=n;i++){
            bcnn=lcm(bcnn,i);
        }
        cout << bcnn<<endl;
    }
    return 0;
}