#include <iostream>
using namespace std;
int main(){
    int N;
    cin >>N;
    if(N<=10)
        for (int i = 0; i < N; i++)
        {
            int n;
            long long m;
            cin>>n;
            if(n<10000000000)
                for (int i = 0; i <= n; i++)
                {
                    m+=i;
                }
                cout <<m<<endl;
        }
}