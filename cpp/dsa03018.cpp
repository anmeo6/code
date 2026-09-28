#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int bestx = -1, besty = -1;

        for (int y = 0; y <= n / 7; y++) {
            if ((n - 7 * y) % 4 == 0) {
                int x = (n - 7 * y) / 4;

                if (bestx == -1 ||
                    x + y < bestx + besty ||
                    (x + y == bestx + besty && x > bestx)) {
                    bestx = x;
                    besty = y;
                }
            }
        }

        if (bestx == -1) {
            cout << -1;
        } else {
            for (int i = 0; i < bestx; i++) cout << '4';
            for (int i = 0; i < besty; i++) cout << '7';
        }
        cout << '\n';
    }

    return 0;
}
