#include <stdio.h>
#include <math.h>
int main(){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    if(b==0){
        printf ("%d %d %d",(long long )a+b,(long long)a-b,(long long)a*b);
    }
    else{
        printf("%d %d %d %d %d",(long long)a+b,(long long)a-b,(long long)a*b,(long long)a/b,(long long)a%b);
    }
}