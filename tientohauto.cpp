#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<string>a;
        for(int i=s.size();i>=0;i--){
            if(s[i]=='*'||s[i]=='-'||s[i]=='+'||s[i]=='/'){
                string x=a.top();a.pop();
                string y=a.top();a.pop();
                string tmp=x+y+s[i];
                a.push(tmp);
            }
            else{
                a.push(string(1,s[i]));
            }
        }
        cout<<a.top()<<endl;
    }
}
