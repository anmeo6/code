#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	float o=pow(b,2)-4*a*c;
	if((a==0 && b==0 && c!=0) || o<0 ){
		printf("NO");
	}
	else if(a==0 && b!=0 ){
		float x=-c/b;
		printf("%,2f",x);
	}
	else if(a!=0 && o==0){
		float y=-b/(2*a);
		printf("%.2f",y);
	}
	else if(a!=0 && o>=0){
		float z1=(-b+sqrt(o))/(2*a);
		float z2=(-b-sqrt(o))/(2*a);
		printf("%.2f %.2f",z1,z2);
	}
	else {
		printf("NO");
	}
return 0;
}
