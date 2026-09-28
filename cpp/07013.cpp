#include <bits/stdc++.h>
using namespace std;
bool isOp(char c){
    return c=='+'||c=='-'||c=='*'||c=='/';
}
void solve(string s){
    stack<int> a;
    for(int i=0;i<s.length();i++){
        if(isOp(s[i])){
            int x=a.top();a.pop();
            int y=a.top();a.pop();
            if(s[i]=='+')   a.push(x+y);
            if(s[i]=='-')   a.push(y-x);
            if(s[i]=='*')   a.push(x*y);
            if(s[i]=='/')   a.push(y/x);
        }
        else{
            int x=s[i]-'0';
            a.push(x);
        }
    }
    cout<<a.top();
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        solve(s);
        cout<<'\n';
    }
}
