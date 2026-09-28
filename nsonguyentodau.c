#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int nt(int n){
    for (int i=2;i<=sqrt(n);i++){
        if (n%i==0)
            return 0;
    }
    return n>1;
}
int main (){
    int n;
    scanf("%d",&n);
    int i=0,k=0;
    while (k<n)
    {
        if(nt(i)){
            printf("%d\n",i);
            ++k;
        }
        ++i;
    }
    
}