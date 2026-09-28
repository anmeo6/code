#include <iostream>
#include <string>
#include <cmath>
using namespace std;
long long  chiahetcho11(string s){
    long long le=0,chan=0;
    long long n=s.length();

    for(long long i=0;i<n;i++){
        long long digit=s[i]-'0';
        if(i%2==0){
            le+=digit;
        }
        else{
            chan+=digit;
        }
    }
    return abs(chan-le);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(chiahetcho11(s)%11==0){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}