#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double n,k=0;
    cin>>n;
    for (double i = 1; i <=n; i++)
    {
        k=k+1/i;
    }
    cout << fixed <<setprecision(4)<<k;
}