#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++) {
        int b = a[i];
        if (b < 2) continue;
        
        int c = 1;
        for (int j = 2; j * j <= b; j++) {
            if (b % j == 0) {
                c = 0;
                break;
            }
        }
        
        if (c) {
            printf("%d ", b);
        }
    }
    
    return 0;
}