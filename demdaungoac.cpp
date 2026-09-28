#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char> a;
        int op=0,ed=0;
        for(char c:s){
            if(c=='('){
                a.push(c);
                op++;
            }
            else{

                if(!a.empty() && a.top()=='('){
                    a.pop();
                    ed--;
                }
                else{
                    ed++;
                    a.push(c);
                }
            }
        }
        cout<<((op+1)/2+(ed+1)/2)<<endl;
    }
    return 0;
}
