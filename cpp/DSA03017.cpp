#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;cin>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        priority_queue<ll> q;
        for(char x:s){
            mp[x]++;
        }
        for(auto x:mp){
            q.push(x.second);
        }
        int sum=0;
        cout<<endl;
        while(k>0){
            int x=q.top();q.pop();
            x--;
            q.push(x);
            k--;
        }
        while(!q.empty()){
            int x=q.top();q.pop();
            sum+=(x*x);
        }
        cout<<sum<<endl;
    }
}
