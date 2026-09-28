#include<bits/stdc++.h>
using namespace std;
int nguyento(int n){
    if(n<2){
         return 0;
    }
    for(int j=2;j<=sqrt(n);j++){
        if(n%j==0) {
            return 0;
        }
    }
    return 1;
}
int snttk(int m, int n){
    for (int i=m;i<=n;i++){
        if(nguyento(i)){
            cout <<i<<" ";
        }
    }
    return 0;
}
int main(){
    int N;
    cin>>N;
    for (int i=0;i<N;i++){
        int a,b;
        cin >>a;
        cin >>b;
        snttk(a,b);
        cout <<endl;
    }
}
