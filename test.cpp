#include<bits/stdc++.h>
using namespace std;
void euler(int u){
    stack<int> s;
    vector<int> ce;
    s.push(u);
    while(!s.empty()){
        int q=s.top();
        if(!adj[q].empty()){
            int t=adj[q].front();
            s.push(t);
            xoaCanh(q,t);
        }
        else{
            ce.push_back(q);
            s.pop();
        }
    }
}
