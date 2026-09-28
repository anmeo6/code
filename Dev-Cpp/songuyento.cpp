#include <stdio.h>
#include <math.h>
int main(){
	int N;
	scanf("%d",&N);
	for(int a=0;a<N;a++){
		int n;
        scanf("%d",&n);
        if(n==1){
            printf("NO\n");
        }
        else if(n<4){
            printf("YES\n");
        }
        else{
            int k=1;
            for(int i=2;i*i<=n;i=i+1){
                if(n%i==0){
                    printf("NO\n");
                    k=0;
                    break;
                }
            }    
            if(k==1){
                printf("YES\n");
            }
        }
    }
}

