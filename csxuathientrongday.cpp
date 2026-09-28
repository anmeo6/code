#include <bits/stdc++.h>
using namespace std;
int n, arr[10000001];
int main(){
    int t;cin>>t;
    while(t--){
        bool used[10]={false};
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            while(arr[i]>0){
                int m=arr[i]%10;
                used[m]=true;
                arr[i]=arr[i]/10;
            }
        }
        for(int i=0;i<=9;i++){
            if(used[i]){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}
