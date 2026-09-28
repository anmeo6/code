#include <stdio.h>
int main(){
	unsigned int a,b;
	scanf("%u %u",&a,&b);
	if(b!=0){
		int tong=a+b;
		int hieu=a-b;
		long long int tich=a*b;
		int thuong=a/b;
		int du=a%b;
		float thg=(float)a/b;
		printf("%u\n%d\n%lld\n%u\n%u\n%.2f\n",tong,hieu,tich,thuong,du,thg);
	}
	else{
		printf("0");
	}
	return 0;
}
