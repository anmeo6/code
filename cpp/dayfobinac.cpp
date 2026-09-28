#include<bits/stdc++.h>
using namespace std;

long long fibonacci(int n){
    if(n < 0) return -1;
    if(n == 0) return 0;
    if(n == 1) return 1;
    
    long long f1 = 0, f2 = 1, fn;
    for(int i = 2; i <= n; i++){
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    return f2;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        for(int i = a; i <= b; i++){
            cout << fibonacci(i) << " ";
        }
        cout << endl;
    }
    return 0;
}