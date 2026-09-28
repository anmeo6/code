#include <stdio.h>

int cotvahang(int a, int b) {
    return (a < b) ? a : b;
}

char chu(int chu) {
    if (chu == 0) {
        return '@';
    } else {
        return 'A' + chu - 1;
    }
}

int main() {
    int R, C;
    if (scanf("%d %d", &R, &C) != 2) {
        return 1;
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            int tong = i + j;
            int char_chu = cotvahang(tong, C - 1);
            printf("%c", chu(char_chu));
        }
        printf("\n");
    }

    return 0;
}