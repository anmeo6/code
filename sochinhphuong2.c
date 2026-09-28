#include <stdio.h>
#include <math.h>
int main(){
    int a,N;
    scanf("%d %d",&a,&N);
    int b=ceil(sqrt(a));
    int c=floor(sqrt(N));
    printf("%d\n",(int)c-b+1);
    for(int i=b;i<=c;i++){
        printf("%d\n",i*i);
    }
}