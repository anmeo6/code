#include <bits/stdc++.h>
using namespace std;

vector<long long> lucky;

// sinh số may mắn
void gen(long long x){
    if(x > 1e9) return;
    if(x > 0) lucky.push_back(x);
    gen(x*10 + 4);
    gen(x*10 + 7);
}

int main(){
    long long a, b;
    cin >> a >> b;

    gen(0);
    sort(lucky.begin(), lucky.end());

    long long res = 0;
    long long cur = a;

    for(int i = 0; i < lucky.size(); i++){
        if(lucky[i] < cur) continue;

        long long L = cur;
        long long R = min(b, lucky[i]);

        res += (R - L + 1) * lucky[i];

        cur = lucky[i] + 1;
        if(cur > b) break;
    }

    cout << res;
    return 0;
}
