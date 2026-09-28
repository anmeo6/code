#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    for (int i=0;i<N;i=i+1){
        long long m;
        cin >>m;
        long long k=m*(m+1)/2;
        cout <<k<<endl;
    }
}