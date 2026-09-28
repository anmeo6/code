#include <stdio.h>
int main(){
    int n,m;
    int tong=0;
    scanf("%d",&n);
    while(n>0){
        m=n%10;
        tong=tong+m;
        n=(n-m)/10;
    }
    printf("%d",tong);
}
