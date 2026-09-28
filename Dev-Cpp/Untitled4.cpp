#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        int n;
        scanf("%d", &n);
        int m, tong=0;
        while(n!=0){
        	m=n%10;
        	tong=tong+m;
        	n=(n-m)/10;
		}
		printf("%d\n",tong);
    }
    return 0;
}
