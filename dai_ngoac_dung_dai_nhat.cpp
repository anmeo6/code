#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<int> q;
        int ans=0;
        q.push(-1);
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                q.push(i);
            }
            else{
                q.pop();
                if(q.empty()){
                    q.push(i);
                }
                else{
                    ans=max(ans,i-q.top());
                }
            }
        }
        cout<<ans<<endl;
    }
}