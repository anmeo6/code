#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int D;cin>>D;
        string s;
        cin>>s;
        map<char,int>mp;
        for(char x:s){
            mp[x]++;
        }
        int mx=0;
        for(auto it:mp){
            mx=max(mx,it.second);
        }
        int n=s.length();
        if(mx<=(n+1)/D) cout<<1;
        else    cout<<-1;
        cout<<'\n';
    }
}
