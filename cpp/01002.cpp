#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a;
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        a.resize(k+1);
        for(int i=1;i<=k;i++){
            cin>>a[i];
        }
        int i=k,x=n;
        while(i>0 && a[i]==x){
            i--;
            x--;
        }
        if(i==0){
            for(int i=1;i<=k;i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else{
            a[i]++;
            for(int j=i+1;j<=k;j++){
                a[j]=a[j-1]+1;
            }
            for(int i=1;i<=k;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}
