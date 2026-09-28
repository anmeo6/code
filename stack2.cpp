#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> a;
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="PUSH"){
            int x;cin>>x;
            a.push(x);
        }
        else if(s=="POP"){
            if(!a.empty()){
                a.pop();
            }
        }
        else if(s=="PRINT"){
            if(a.empty())   cout<<"NONE"<<endl;
            else{
                int v=a.top();
                cout<<v<<endl;
            }
        }
    }
}
