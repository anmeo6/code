#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000000;
const int NO_EDGE = 10000;

int main() {
    ifstream cin("DN.INP");
    ofstream cout("DN.OUT");

    int n, s, t;
    cin >> n >> s >> t;

    vector<vector<int>> a(n + 1, vector<int>(n + 1));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    vector<int> d(n + 1, INF), truoc(n + 1, -1);
    vector<bool> used(n + 1, false);

    d[s] = 0;

    for (int k = 1; k <= n; k++) {
        int u = -1;
        int minD = INF;

        for (int i = 1; i <= n; i++) {
            if (!used[i] && d[i] < minD) {
                minD = d[i];
                u = i;
            }
        }

        if (u == -1) break;

        used[u] = true;

        for (int v = 1; v <= n; v++) {
            if (!used[v] && a[u][v] != NO_EDGE && d[v] > d[u] + a[u][v]) {
                d[v] = d[u] + a[u][v];
                truoc[v] = u;
            }
        }
    }

    if (d[t] == INF) {
        cout << 0;
        return 0;
    }

    vector<int> path;
    for (int x = t; x != -1; x = truoc[x]) {
        path.push_back(x);
    }

    reverse(path.begin(), path.end());

    cout << d[t] << '\n';
    for (int x : path) {
        cout << x << ' ';
    }

    return 0;
}
