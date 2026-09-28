#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a==0){
		if(b==0){
			printf("NO");
		}
		else{
			double x=-c/b;
			printf("%.2lf",x);
		}
	}
	else{
		double o=pow(b,2)-4*a*c;
		if (o<0){
			printf("NO");
		}
		else if(o==0){
			double x=-b/(2*a);
			printf("%.2lf",x);
		}
		else{
			double z1=(-b+sqrt(o))/(2*a);
			double z2=(-b-sqrt(o))/(2*a);
			printf("%.2lf %.2lf",z1,z2);
		}
	}
return 0;
}
