#include <bits/stdc++.h>
using namespace std;
int a[1001],n;
bool visited[1001];
bool diff(){
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i+1])==1){
            return false;
        }
    }
    return true;
}
void Try(int pos){
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            visited[i]=1;
            a[pos]=i;
            if(pos==n){
                if(diff()){
                    for(int j=1;j<=n;j++){
                        cout<<a[j];
                    }
                    cout<<endl;
                }
            }
            else{
                Try(pos+1);
            }
            visited[i]=0;
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        Try(1);
    }
}
