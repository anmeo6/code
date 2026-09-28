#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int a;
        scanf("%d",&a);
        int m,n;
        if(a>0){m=a%10;}
        while(a>0){
            n=a%10;
            a=a/10;
        }
        if(n==m){
            printf("YES\n");
        }
        else{printf("NO\n");}
    }    
 
}