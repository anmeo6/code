#include <stdio.h>
#include <math.h>

int tinhTongChuSo(int n) {
    int tong = 0;
    while (n > 0) {
        tong += n % 10; 
        n /= 10;       
    }
    return tong;
}

void giaiQuyet() {
    int n;
    scanf("%d", &n); 

    int dem = 0; 
    int canBacHai = sqrt(n); 


    for (int i = 1; i <= canBacHai; i++) {
        if (n % i == 0) { 
  
            if (tinhTongChuSo(i) % 3 == 0) {
                dem++;
            }
            if (i * i != n) {
                int uocSoKhac = n / i;
                if (tinhTongChuSo(uocSoKhac) % 3 == 0) {
                    dem++;
                }
            }
        }
    }

    printf("%d\n", dem);
}

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        giaiQuyet();
    }

    return 0;
}