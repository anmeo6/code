#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
bool visited[1001];

void bfs(int start, int n) {
    queue<int> q;

    memset(visited, false, sizeof(visited));

    q.push(start);
    visited[start] = true;

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        cout << u << " ";

        for(int v : adj[u]) {
            if(!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    // Nhập danh sách kề
    for(int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        for(int j = 0; j < k; j++) {
            int x;
            cin >> x;
            adj[i].push_back(x);
        }
    }

    bfs(1, n);  // BFS bắt đầu từ đỉnh 1

    return 0;
}
