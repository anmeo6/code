#include <bits/stdc++.h>
using namespace std;
bool isOp(char c){
    return c=='+'||c=='-'||c=='*'||c=='/'||c=='^';
}
int toantu(char c){
    if(c=='^')  return 3;
    if(c=='*'||c=='/')  return 2;
    if(c=='+'||c=='-')  return 1;
    return 0;
}
void solve(string s){
    stack<char> st;
    string ans="";
    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            ans+=s[i];
        }

        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else if(isOp(s[i])){
            while(!st.empty() && st.top()!='('&& toantu(st.top())>=toantu(s[i])){
                ans+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        ans+= st.top();
        st.pop();
    }
    cout<<ans<<endl;
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
