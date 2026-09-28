#include <iostream>
using namespace std;
int main(){
    int N;
    cin >>N;
    if (N<=10){
        for (int i = 0; i < N; i++)
            {
                long long n,m=0;
                cin >> n;
                if(n<=1000000000)
                    for (long long j=0;j<=n;j++){
                        m+=j;
                    }
                    cout<<m<<endl;
            }
    }
    
}