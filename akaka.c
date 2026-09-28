#include <stdio.h>
#include <math.h>
int main(){
    long long N;
    scanf("%lld",&N);
    if(N<=0){
        printf("NO");
    }
    else{
        long long tong=0;
        for(long long i=1;i<=N;i++){
            tong += i;
        }
        printf("%lld",tong);
    }
}