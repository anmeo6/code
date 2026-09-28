#include <stdio.h>

int main() {
    char input[10];
    fgets(input, 10, stdin);
    
    int T = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            T = T * 10 + (input[i] - '0');
        }
    }
    
    for (int t = 0; t < T; t++) {
        char s[502]; 
        fgets(s, 502, stdin);
        
        int len = 0;
        while (s[len] != '\0' && s[len] != '\n' && s[len] != '\r') {
            len++;
        }
        s[len] = '\0'; 
        
        if (len == 0) {
            printf("NO\n");
            continue;
        }
        
        int sochan = 1;
        for (int i = 0; i < len; i++) {
            char c = s[i];
            if (c != '0' && c != '2' && c != '4' && c != '6' && c != '8') {
                sochan = 0;
                break;
            }
        }
        
        int thuannghich = 1;
        for (int i = 0; i < len / 2; i++) {
            if (s[i] != s[len - 1 - i]) {
                thuannghich = 0;
                break;
            }
        }
        if (sochan && thuannghich) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}