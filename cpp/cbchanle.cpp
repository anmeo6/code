#include <iostream>
#include <cmath>
using namespace std;
bool cbchanle(long long n){
    int chan=0,le=0;
    while(n>0){
        long long d=n%10;
        if(d%2==0){
            chan++;
        }
        else{
            le++;
        }
        n=n/10;
    }
    return chan==le;
}
int main(){
    int a;
    cin>>a;
    long long start=pow(10,a-1);
    long long end=pow(10,a)-1;
    int k=0;
    for(long long i=start;i<=end;i++){
        if(cbchanle(i)){
            cout<<i<<" ";
            k++;
            if(k%10==0){
                cout<<endl;
            }
        }
    }
    return 0;
}