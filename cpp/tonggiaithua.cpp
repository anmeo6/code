#include <iostream>
using namespace std;
int main(){
    long long n,k=1,m=0;
    cin >>n;
    for (int i = 1; i <=n; i++)
    {
        k=k*i;
        m=m+k;
    }
    cout<<m;
}