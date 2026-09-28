#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        string sub="084";
        size_t pos =s.find(sub);
        if(pos != string::npos){
            s.erase(pos,sub.length());
        }
        cout<<s<<endl;
    }

}