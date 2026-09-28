#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int N;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        long long n,m=0;
        cin>>n;
        long long k=n;
        while (n>0)
        {
            m=m*10+n%10;
            n=n/10;
        }
        if(m==k){
            cout <<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
}