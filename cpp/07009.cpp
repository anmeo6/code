#include <bits/stdc++.h>
using namespace std;
bool isOp(char c){
    return c=='+'||c=='-'||c=='*'||c=='/';
}
void hauto(string s){
    stack<string> st;
    for(int i=s.length()-1;i>=0;i--){
        if(isOp(s[i])){
            string x=st.top();st.pop();
            string y=st.top();st.pop();
            string tmp=x+y+s[i];
            st.push(tmp);
        }
        else{
            st.push(string(1,s[i]));
        }
    }
    cout<<st.top();
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        hauto(s);
        cout<<'\n';
    }
}
