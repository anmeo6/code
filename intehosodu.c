#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a<1){
        printf("Sai");
    }
    else if (a%5==0)
    {
       int c=a*3;
       printf("%d",c); /* code */
    }
    else if (a%5==2)
    {
        int b=a*2;
        printf("%d",b);
    }
    else{
        int d=a*5;
        printf("%d",d);
    }
    
}print