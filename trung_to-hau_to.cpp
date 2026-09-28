#include <bits/stdc++.h>
using namespace std;
int toantu(char c){
    if(c=='^')  return 3;
    else if(c=='*'||c=='/') return 2;
    else if(c=='+'|| c=='-')    return 1;
    return 0;
}
bool isOperator(char c){
    return c=='+'||c =='-'||c=='*'||c=='/'||c=='^';
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> st;
        string ans="";
        for(auto c:s){
            if(isalpha(c)){
                ans+=c;
            }
            else if(c=='('){
                st.push(c);
            }
            else if(c==')'){
                while(!st.empty() && st.top()!='('){
                    ans+=st.top();
                    st.pop();
                }
                st.pop(); // pop bỏ '(' stack;
            }
            else if(isOperator(c)){
                // khi stack # rỗng và st.top không phải '(' và toán tử của top có độ ưu tiên cao hơn char c
                while( !st.empty() && st.top()!='(' && toantu(st.top())>=toantu(c)){
                    ans+=st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
        while(!st.empty()){
            ans+= st.top();
            st.pop();
        }
        cout<<ans<<endl;
    }
    return 0;
}