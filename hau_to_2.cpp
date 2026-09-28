#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a;
        cin>>a;
        stack<long long> q;
        for(int i=0;i<a;i++){
            string st;
            cin>>st;
            if(st=="+" ||st=="-"||st=="*"||st=="/"){
                long long x=q.top();q.pop();
                long long y=q.top();q.pop();
                if(st=="+")  q.push(y+x);
                else if(st=="-")  q.push(y-x);
                else if(st=="*")  q.push(y*x);
                else if(st=="/")  q.push(y/x);
            }
            else{
                q.push(stoll(st));
            }
        }
        cout<<q.top()<<endl;
    }
}