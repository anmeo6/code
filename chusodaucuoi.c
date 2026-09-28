#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m=n%10;
    int x;
    while (n>0)
    {
        x=n%10;
        n=n/10;
    }
    printf("%d %d",x,m);
    return 0;
}