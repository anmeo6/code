#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int t = 1; t <= T; t++) {
        string s;
        cin >> s;
        stack<int> st;
        string res = "";

        for (int i = 0; i <= s.length(); i++) {
            st.push(i + 1);

            if (i == s.length() || s[i] == 'I') {
                while (!st.empty()) {
                    res += to_string(st.top());
                    st.pop();
                }
            }
        }

        cout<<"Test "<< t << ": " << res << endl;
    }

    return 0;
}
