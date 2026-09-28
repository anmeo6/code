#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a={1000,500,200,100,50,20,10,5,2,1};
void Try(int n, int cnt){
    if(n==0){
        cout<<cnt<<endl;
        return;
    }
    for(int i=0;i<a.size();i++){
        if(a[i]==n){
            cnt++;
            cout<<cnt<<endl;
            return ;
        }
        else if(a[i]<n){
            cnt++;
            n=n-a[i];
            Try(n,cnt);
            return ;
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        Try(n,0);
    }
}