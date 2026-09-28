#include <stdio.h>
#include <math.h>
void  nhap(int a[], int n){
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if (a[i]%2==0)
            printf("%d ", a[i]);
    }
}
int main (){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int n,a[1000];
        scanf("%d",&n);
        nhap(a , n);
        printf("\n");
    }
}