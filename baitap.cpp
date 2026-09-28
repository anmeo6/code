#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string s;
        getline(cin, s);
        int n = s.size();

        vector<string> res(n);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(i);
                res[i] = "";
            }
            else if (s[i] == ')') {
                if (!st.empty()) {
                    int pos = st.top(); st.pop();
                    res[pos] = "0";
                    res[i] = "1";
                } else {
                    res[i] = "-1";
                }
            }
            else {
                res[i] = string(1, s[i]);
            }
        }

        while (!st.empty()) {
            res[st.top()] = "-1";
            st.pop();
        }
        for (int i = 0; i < n; i++) {
            cout << res[i];
        }
        cout << endl;
    }
}
