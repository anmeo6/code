#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> b(n);
        b=a;
        sort(a.begin(),a.end());
        int check=1;
        for(int i=0;i<n;i++){
            if(a[i]!=b[n-i-1] && a[i]!=b[i]){
                check=0;
            }
        }
        if(check==1)    cout<<"Yes\n";
        else    cout<<"No\n";
    }   
    return 0;
}