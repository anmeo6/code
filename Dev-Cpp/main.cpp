#include <stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(b=!0){
		int t=a+b;
		int h=a-b;
		int tc=a*b;
		int thg=a/b;
		int du=a%b;
		float tg=1.0*a/b;
		printf("%d\n%d\n%d\n%d\n%d\n%.2f",t,h,tc,thg,du,tg);
	}
	else{
		printf("0");
	}
	return 0;
}
