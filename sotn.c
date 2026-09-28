#include <stdio.h>
long long thuannghich(long long n){
    long long m=0,ss=n;
    while(n!=0){
        m=m*10+n%10;
        n=n/10;
    }
    if(m==ss) printf("YES\n");
    else printf("NO\n");
}
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        long long x;
        scanf("%lld",&x);
        thuannghich(x);

    }
}