#include <bits/stdc++.h>
using namespace std;
int a[100],n;
string s;bool visited[100];
void Try(int pos){
    if(pos>n){
        for(int i=1;i<=n;i++){
            cout<<s[a[i]-1];
        }
        cout<<" ";
    }
    else{
        for(int i=1;i<=n;i++){
            if(visited[i]==0){
                visited[i]=1;
                a[pos]=i;
                Try(pos+1);
                visited[i]=0;
            }
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>s;
        n=s.length();
        Try(1);
        cout<<endl;
    }
    return 0;
}
