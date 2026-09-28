#include <bits/stdc++.h>
using namespace std;
const int MAXN=1000000;
bool isPrime[MAXN+1];
void sieve(int n){
    for(int i=0;i<=n;++i){
        isPrime[i]=true;
    }
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<=sqrt(n);++i){
        if(isPrime[i]==true){
            for(int j=i*i;j<=n;j+=i){
                isPrime[j]=false;
            }
        }
    }
}
int main() {
    int L,R;
    cin>>L>>R;
    sieve(R);
    int cnt=0;
    for (int i = L; i <= R; i++)
        if (i<10){
            if(isPrime[i]){
                cnt++;
            }
        }
        else{
            if(isPrime[i]){
                int n=i;
                int check=1;
                while(n>0){
                    int m=n/10;
                    if(isPrime[m]==false){
                        check=0;
                    }
                    n=n/10;
                }
                if(check==1){
                    cnt++;
                }
            }
        }
    cout<<cnt;
    return 0;
}

