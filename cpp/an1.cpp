#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        string s;
        cin>>s;
        bool ktra=true;
        for(int i=1;i<s.length();i++){
            if(abs(s[i]-s[i-1])!=1){
                ktra=false;
                break;
            }
        }
        if(ktra){
            cout<<"YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
    }
}