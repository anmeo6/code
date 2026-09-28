#include <stdio.h>
#include <math.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x<=0){
        printf("NO");
    }
    else{
        int n=0;
        int i;
        for(i=1;i>0;i++){
            n+=i;
            if(n>x){
                break;
            }
        }
        printf("%d",i);
    }
}