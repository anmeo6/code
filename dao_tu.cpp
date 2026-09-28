#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<string> a;
        stringstream ss(s);
        string word;
        while(ss>> word){
            a.push(word);
        }
        while(!a.empty()){
            cout<<a.top()<<" ";
            a.pop();
        }
        cout<<endl;
    }
}