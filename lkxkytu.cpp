#include <bits/stdc++.h>
using namespace std;
int k;char n;char a[1001];
vector<string> ans;
void Try(int pos,char n,char x){
    for(char i=x;i<=n;i++){
        a[pos]=i;
        if(pos==k-1){
            string s="";
            for(int j=0;j<k;j++){
                s+=a[j];
            }
            ans.push_back(s);
        }
        else{
            Try(pos+1,n,i);
        }
    }
}
int main(){
    cin>>n;
    cin>>k;
    Try(0,n,'A');
    sort(ans.begin(),ans.end());
    for(auto x:ans){
        cout<<x<<endl;
    }
    return 0;
}
