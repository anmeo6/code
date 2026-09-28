#include <stdio.h>

int main() {
    int n,m,i=0;
    scanf("%d",&n);
    while (n>0)
    {
        m=n%10;
        n=n/10;
        i++;
    }
    
    printf("%d",i);
}