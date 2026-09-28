#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        long long n;
        scanf("%lld",&n);
        long long m=0,so=n,k,c=0;
        while(n!=0){
            m=m*10+n%10;
            n=n/10;
        }
        while (n!=0)
        {
            k=n%10;
            if(k%2!=0){
                printf("%lld",k);
                c=1;
                break;
            }
            n=n/10;
        }
        printf("%lld",m);
        if(m==so || c==0){
            printf("YES\n");
        }
        else if (m!=so || c==1)
            printf("NO\n");
        }
        
}