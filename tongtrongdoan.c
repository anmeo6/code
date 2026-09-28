#include <stdio.h>
#include <math.h>
int main(){
    int a,N;
    scanf("%d %d",&a,&N);
    int b,l;
    if(a<N){
        b=a;
        l=N;
    }
    else{
        b=N;
        l=a;
    }
    int sum=0;
    for(int i=b;i<=l;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}