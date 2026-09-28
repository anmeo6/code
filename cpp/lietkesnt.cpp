#include<iostream>
#include <cmath>
using namespace std;
int nguyento(int n){
    if(n<2)
        return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i<2){
            continue;
        }
        if(i>=2){
            if(nguyento(i)){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}