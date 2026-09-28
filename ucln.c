#include <stdio.h>
#include <math.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N>=1 && N<=100){
        for(int i=0;i<N;i++){
            int a,b;
            scanf("%d %d",&a,&b);
            int c=b;
            int d=a;
            if(a<1 || a>100000000 ||b<0 ||b>100000000){
                printf("Nhap sai\n");
            }
            else{
                int r=a%b;
                while (r!=0)
                {
                    a=b;
                    b=r;
                    r=a%b;
                }
                int ucln=b;
                long long bcnn=d*c/ucln;
                printf("%d %d\n",bcnn,ucln);
            }
        }
    }
    else{
        printf("Nhap sai\n");
    }
    return 0;
}