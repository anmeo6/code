#include <bits/stdc++.h>
using namespace std;

int n, u;
int a[105][105];
int x[105];
bool visited[105];
int cnt = 0;

void Try(int pos) {
    if(pos == n + 1) {
        if(a[x[n]][u] == 1) {
            for(int i = 1; i <= n; i++) {
                cout << x[i] << ' ';
            }
            cout << u << '\n';
            cnt++;
        }
        return;
    }

    for(int v = 1; v <= n; v++) {
        if(!visited[v] && a[x[pos - 1]][v] == 1) {
            x[pos] = v;
            visited[v] = true;

            Try(pos + 1);

            visited[v] = false;
        }
    }
}

int main() {
    //freopen("CT.INP", "r", stdin);
    //freopen("CT.OUT", "w", stdout);

    cin >> n >> u;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    x[1] = u;
    visited[u] = true;

    Try(2);

    if(cnt == 0) {
        cout << 0;
    } else {
        cout << cnt;
    }

    return 0;
}

