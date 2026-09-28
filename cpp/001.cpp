#include <bits/stdc++.h>
using namespace std;
int n,a[10001];
bool cmp(){
    for(int i=1;i<=n/2;i++){
        if(a[i]!=a[n-i+1]){
            return false;
        }
    }
    return true;
}
void Try(int pos){
    for(int i=0;i<=1;i++){
        a[pos]=i;
        if(pos==n){
            if(cmp()){
                for(int j=1;j<=n;j++){
                    cout<<a[j]<<" ";
                }
                cout<<endl;
            }
        }
        else{
            Try(pos+1);
        }
    }
}
int main(){
    cin>>n;
    Try(1);
}
