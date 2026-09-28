#include <stdio.h>
int main(){
    int a;
    int b;
    scanf("%d",&a);
    for(int i=a;0<i;i--){
        int n=a%i;
        if(n==0){
            printf("%d ",i);
            b++;
            if(b==3){
                break;
            }
        }
    }
    if(b!=3){
        printf("THIEU");
    }
}