#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        stack<int> q;
        string s;
        cin>>s;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
                int a=q.top();q.pop();
                int b=q.top();q.pop();
                if(s[i]=='+')   q.push(a+b);
                if(s[i]=='-')   q.push(a-b);
                if(s[i]=='*')   q.push(a*b);
                if(s[i]=='/')   q.push(a/b);
            }
            else{
                int x=s[i]-'0';
                q.push(x);
            }
        }
        cout<<q.top()<<endl;
        q.pop();
    }
}