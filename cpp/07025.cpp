#include<bits/stdc++.h>
using namespace std;
using ll=long long
bool isOp(string c){
    return c=="+"||c=="-"||c=="*"||c=="/";
}
void solve(vector<string> s){
    stack<ll> a;
    for(int i=0;i<s.size();i++){
        if(isOp(s[i])){
            ll x=a.top();a.pop();
            ll y=a.top();a.pop();
            if(s[i]=="+")   a.push(x+y);
            if(s[i]=="-")   a.push(y-x);
            if(s[i]=="*")   a.push(x*y);
            if(s[i]=="/")   a.push(y/x);
        }
        else{
            a.push(stoi(s[i]));
        }
    }
    cout<<a.top();
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> s;
        string x;
        for(int i=0;i<n;i++){
            cin>>x;
            s.push_back(x);
        }
        solve(s);
        cout<<'\n';
    }
}
