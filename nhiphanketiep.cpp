#include <bits/stdc++.h>
using namespace std;
void nhiphan(){
    int k=1;
    string s;
    getline(cin,s);
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='0'){
            s[i]='1';
            k=0;
            break;
        }
        else{
            s[i]='0';
        }
    }
    if(k==1){
        s='1'+s;
    }
    else{
        s=s;
    }
    cout<<s;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        nhiphan();
        cout<<endl;
    }
    return 0;
}
