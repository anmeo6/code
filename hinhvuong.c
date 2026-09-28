#include <stdio.h>
#include <math.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        int k=d-c+b;
        if (a==k){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }    
    return 0;
}