#include <bits/stdc++.h>
using namespace std;
bool isOp(char c){
    return c=='+'||c=='-'||c=='*'||c=='/';
}
void solve(string s){
    stack<string> st;
    for(auto c:s){
        if(isOp(c)){
            string x=st.top();st.pop();
            string y=st.top();st.pop();
            string tmp='('+y+c+x+')';
            st.push(tmp);
        }
        else{
            st.push(string(1,c));
        }
    }
    cout<<st.top()<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        solve(s);
    }
}

