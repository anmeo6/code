#include <stdio.h>
int main(){
    int n,a=0,i=1;
    scanf("%d",&n);
    for(i;i<n;i++)
        {
            if(n%i==0){
                a=a+i;
            }
        }
    if (a=n)
    {
        printf("1");
    }
    else{
        printf("0");
    }
}