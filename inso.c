#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<=0 || n>=100){
        printf("Nhap sai");
    }
    else {
        printf("%d",n);
    }
}