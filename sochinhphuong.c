#include <stdio.h>
#include <math.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int a;
        scanf("%d",&a);
        int b=round(sqrt(a));
        int c=a%b;
        if(c==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}
