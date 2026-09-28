#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else if(!st.empty() && s[i]==')' && st.top()=='('){
                st.pop();
            }
            else if(!st.empty() && s[i]==']' && st.top()=='['){
                st.pop();
            }
            else if(!st.empty() && s[i]=='}' && st.top()=='{'){
                st.pop();
            }
        }
        if(st.empty())    cout<<"YES";
        else    cout<<"NO";
        cout<<endl;
    }
}