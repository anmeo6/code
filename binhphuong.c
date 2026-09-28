#include <stdio.h>
#include <math.h>
int main(){
	int N;
	scanf("%d",&N);
	for (int i=1;i<=N;i++){
		long long a;
		scanf("%lld",&a);
		long long b=a*a;
		printf("%lld\n",b);
	}
	return 0;
}