#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string sub;
    cin>>sub;
    if(sub.empty()|| sub.length()>s.length()){
        cout<<endl;
        return 0;
    }
    size_t pos= s.find(sub);
    while(pos != string::npos){
        cout<<pos+1<<" ";
        pos= s.find(sub,pos+1);
    }
    cout<<endl;
}

