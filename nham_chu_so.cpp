#include <bits/stdc++.h>
using namespace std;
string n,m;
int sln(string n,string m){
    for(int i=0;i<n.size();i++){
        if(n[i]=='5'){
            n[i]='6';
        }
    }
    for(int i=0;i<m.size();i++){
        if(m[i]=='5'){
            m[i]='6';
        }
    }
    return stoi(n)+stoi(m);
}
int sbn(string n,string m){
    for(int i=0;i<n.size();i++){
        if(n[i]=='6'){
            n[i]='5';
        }
    }
    for(int i=0;i<m.size();i++){
        if(m[i]=='6'){
            m[i]='5';
        }
    }
    return stoi(n)+stoi(m);
}
int main(){
    cin>>n>>m;
    cout<<sbn(n,m)<<" "<<sln(n,m);
    return 0;
}