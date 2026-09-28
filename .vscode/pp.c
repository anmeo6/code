#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < -32767 || n > 32767) {
        printf("OverValue\n");
    } else {
        char nhiphan[17]; 
        if (n < 0) {
            nhiphan[0] = '1';
            n = -n; 
        } else {
            nhiphan[0] = '0';
        }

        for (int i = 14; i >= 0; i--) {
            int bit = (n >> i) & 1; 
            nhiphan[15 - i] = bit + '0'; 
        }
        nhiphan[16] = '\0'; 

        printf("%s\n", nhiphan);
    }

    return 0;
}