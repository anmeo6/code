#include <stdio.h>
#include <math.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int c=n;
    int a=n%10;
    int i=0,b;
    while(n>0){
        m=n%10;
        n=n/10;
        b=m;
        i++;
    }
    int so=(b*pow(10,(i-1)));
    int so1=c-so-a;
    int so2=so1+a*so+b;
    printf("%d",so2);
}