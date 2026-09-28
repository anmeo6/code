#include <stdio.h>
int main(){
    long long n,a=1,m=0;
    scanf("%lld",&n);
    for (long long i=1;i<=n;i++){
        a=a*i;
        m=m+a;
    }
    printf("%lld",m);
}