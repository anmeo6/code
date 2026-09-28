#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int a[n+1][n+1];
    memset(a,0,sizeof(a));
    for(int i=1;i<=n;i++){
        string x;
        getline(cin,x);
        stringstream ss(x);
        int s;
        while(ss>>s){
            if(s>=1 && s<=n){
                a[i][s]=1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
