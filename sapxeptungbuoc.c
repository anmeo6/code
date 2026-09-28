#include <stdio.h>
void cacbuoc(int mang[], int n, int step) {
    printf("Buoc %d: ", step);
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);

    int mang[200];
    for (int i = 0; i < n; i++) {
        scanf("%d", &mang[i]);
    }
    int i,j,m;
    for (i = 1; i < n; i++) {
        m = mang[i];
        j = i - 1;
        while (j >= 0 && mang[j] > m) {
            mang[j + 1] = mang[j];
            j = j - 1;
        }
        mang[j + 1] = m;
        cacbuoc(mang, n, i);
    }

    return 0;
}