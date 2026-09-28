#include <bits/stdc++.h>
using namespace std;
int a[100],b[1000];
int n;int cnt=0;int k;
bool doixung(){
    for(int i=1;i<=n/2;i++){
        if(a[i]!=a[n-i+1]){
            return false;
        }
    }
    return true;
}
void Try(int pos){
    if(cnt==k){
        return;;
    }
    if(pos>n){
        if(doixung()){
            cnt++;
            for(int i=1;i<=n;i++){
                cout<<a[i];
            }
            cout<<" ";
        }
    }
    else{
        for(int i=0;i<=1;i++){
            a[pos]=b[i];
            Try(pos+1);
        }
    }
}
int main(){
    int t;cin>>t;
    b[0]=6;b[1]=8;
    while(t--){
        cin>>k;
        for(int i=2;i<=10000;i++){
            if(i%2==0){
                n=i;
                Try(1);
            }
        }
        cnt=0;
        cout<<endl;
    }
    return 0;
}
