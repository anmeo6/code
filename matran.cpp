#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ifstream inp("DT.INP");
    ofstream out("DT.OUT");

    int t, n;
    if (!(inp >> t >> n)) return 0;

    vector<vector<int>> adj(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            inp >> adj[i][j];
        }
    }

    if (t == 1) {
        // Yêu cầu 1: Tính bậc của từng đỉnh
        for (int i = 0; i < n; i++) {
            int degree = 0;
            for (int j = 0; j < n; j++) {
                degree += adj[i][j];
            }
            out << degree << (i == n - 1 ? "" : " ");
        }
    } else if (t == 2) {
        // Yêu cầu 2: Chuyển sang danh sách cạnh
        vector<pair<int, int>> edges;
        for (int i = 0; i < n; i++) {
            // Chỉ xét j > i để không lặp cạnh và giữ thứ tự từ điển
            for (int j = i + 1; j < n; j++) {
                if (adj[i][j] == 1) {
                    edges.push_back({i + 1, j + 1}); // Đỉnh thường bắt đầu từ 1
                }
            }
        }

        out << n << " " << edges.size() << endl;
        for (const auto& edge : edges) {
            out << edge.first << " " << edge.second << endl;
        }
    }

    inp.close();
    out.close();
    return 0;
}
