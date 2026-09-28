#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if(n<=1||n>=100)
	{
		printf("Nhap sai\n");
	}
	else
	{
		while(n--)
		{
			int a,b;
			scanf("%d %d", &a,&b);
			int a1=a,b1=b;
			if(a < 1 || a > 100000000 || b < 1 || b > 100000000)
			{
				printf("Nhap sai\n");
			}
			else
			{
				while(a!=b)
				{
					if(a>b)
					{
						a=a-b;
					}
					else
					{
						if(b>a)
						{
							b=b-a;
						}
					}
				}
				int ucln=a;
				int bcnn=(a1*b1)/ucln;
				printf("%d %d", bcnn,ucln);
			}
			printf("\n");
		}
	}
	return 0;
}