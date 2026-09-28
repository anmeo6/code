#include<stdio.h>

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
		for(int t=0;t<b;t++){
			printf("*");
		}
		printf("\n");
		a--;
	}
	return 0;
}