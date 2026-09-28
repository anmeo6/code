#include <stdio.h>
int main(){
    int a;
    int m, tich=1;
    scanf("%d",&a);
    while(a>0){
        m=a%10;
        tich=m*tich;
        a=a/10;
    }
    printf("%d",tich);
}