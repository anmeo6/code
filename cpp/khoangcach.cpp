#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        double e=c-a;
        double f=d-b;
        double i=pow(e,2),j=pow(f,2);
        double k=sqrt(i+j);
        cout<<fixed<<setprecision(4)<<k<<endl;
    }
    return 0;
}