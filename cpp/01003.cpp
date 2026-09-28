#include<bits/stdc++.h>
using namespace std;
int n,a[1001];
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int i=n-1;
        while(i>0 && a[i]>=a[i+1]){
            i--;
        }
        int j=n;
        while(a[j]<=a[i]){
            j--;
        }
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
        if(i==0){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
        }
        else{
            for(int i=1;i<=n;i++){
                cout<<a[i]<<" ";
            }
        }
        cout<<"\n";
    }
}

