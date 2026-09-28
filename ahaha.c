#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        n=n*(-1);
        printf("%d",n);
    }
    else {
        printf("%d",n);
    }
}