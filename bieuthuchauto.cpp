#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<int> a;
        for(int i=0;i<s.size();i++){
             if(s[i]=='*'){
                int x=a.top();a.pop();
                int y=a.top();a.pop();
                a.push(x*y);
             }
             else if(s[i]=='/'){
                int x=a.top();a.pop();
                int y=a.top();a.pop();
                a.push(y/x);
             }
             else if(s[i]=='-'){
                int x=a.top();a.pop();
                int y=a.top();a.pop();
                a.push(y-x);
             }
             else if(s[i]=='+'){
                int x=a.top();a.pop();
                int y=a.top();a.pop();
                a.push(x+y);
             }
             else{
                int x=s[i]-'0';
                a.push(x);
             }
        }
        cout<<a.top()<<endl;
    }
}
