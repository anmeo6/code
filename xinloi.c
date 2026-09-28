#include <stdio.h>

int main() {
    int h;
    scanf("%d", &h);
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h -1 - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < h + i; j++) { 
            printf("*");
        }
        printf("\n");
    }
    return 0;
}