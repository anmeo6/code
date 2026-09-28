#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char s;
        cin>>s;
        if(islower(s)){
            s=toupper(s);
            cout<<s<<endl;
        }
        else{
            s=tolower(s);
            cout<<s<<endl;
        }
    }
}