#include <bits/stdc++.h>
using namespace std;
void xautruoc(){
    string s;
    cin>>s;
    int k=1;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='0'){
            s[i]='1';
            k=0;
        }
        else{
            s[i]='0';
            break;
            k=1;
        }
    }
    cout<<s;
}
int main(){
    int t;cin>>t;
    while(t--){
        xautruoc();
        cout<<endl;
    }

}
