#include <stdio.h>
int main(){
    int a,b;
	scanf("%d%d",&a,&b);
	int c=a;
	for(int i=0;i<c;i++){
		int d=c-a;
		if(d>0){
			for(int j=0;j<c-a;j++){
				printf("~");
			}
		}
		if(i==0||i==c-1){
			for(int k=0;k<b;k++){
				printf("*");
			}
		}else{
			printf("*");
			for(int l=0;l<b-2;l++){
				printf(".");
			}
			printf("*");
		}
		printf("\n");
		a--;
	}
	return 0;
}