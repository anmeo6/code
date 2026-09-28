#include <stdio.h>
int main(){
    int N;
    scanf("%d",N);
    for(int i=1;i<=N;i++){
        int a;
        double n;
        scanf("%d",&a);
        n=(double)1/a;
        printf("%.15lf",n);
    }
    return 0;
    
}
