#include <bits/stdc++.h>
using namespace std;
int n,k,a[1000001];
int MAX;
void lonnhat(){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-k+1;i++){
        MAX=-1e6;
        for(int j=i;j<k+i;j++){
            if(a[j]>MAX){
                MAX=a[j];
            }
        }
        cout<<MAX<<" ";
    }
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        lonnhat();
    }
    cout<<endl;
    return 0;
}
