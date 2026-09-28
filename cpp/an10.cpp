#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    if (t<=100){
        while(t--){
            long long n;
            cin >>n;
            for(long long i=2;i*i<=n;i++){
                if(n%i==0){
                    int k=0;
                    while(n%i==0){
                        k++;
                        n=n/i;
                    }
                    cout<<i<<" "<< k <<endl;
                }
            }
            if(n>1){
                cout<<n<<" "<<1<<endl;
            }
        }
    }
}