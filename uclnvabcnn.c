#include <stdio.h>
void USCLN2(int *a, int b ){
    while(b!=0){
        int c=b;
        b=*a%b;
        *a=c;
    }
}
int main()
{
	long a, b, r;
	
	scanf("%ld%ld",&a, &b);
	if(a> 0 && b>0)
	{
		r = a;
		USCLN2(&a,b); 
		printf("%ld\n%lld", a, (long long) r*b/a);
	}
}