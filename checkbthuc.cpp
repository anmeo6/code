#include <bits/stdc++.h>
using namespace std;
bool bieuthuc(string s){
    stack<char> st;
    for(auto c:s){
        if(c!=')'){
            st.push(c);
        }
        else{
            bool check=false;
            while(!st.empty() && st.top()!='('){
                if(st.top()=='+' || st.top()=='-' || st.top()=='*'||st.top()=='/'){
                    check=true;
                }
                st.pop();
            }
            if(check==false)  return true;
            if(!st.empty()) st.pop();
        }
    }
    return false;
}
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(!bieuthuc(s))    cout<<"YES";
        else    cout<<"NO";
        cout<<endl;
    }
    return 0;
}
