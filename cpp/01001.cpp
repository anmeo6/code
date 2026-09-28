#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        if(s.back()=='0'){
            s[n-1]='1';
            cout<<s;
        }
        else{
            for(int i=n-1;i>=0;i--){
                if(s[i]=='0'){
                    s[i]='1';
                    break;
                }
                else{
                    s[i]='0';
                }
            }
            if(s[0]=='0'){
                cout<<'0'+s;
            }
            else
                cout<<s;
        }
        cout<<"\n";
    }
}
