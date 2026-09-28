#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int k=0;
        for(int i=1;i<n-1;i++){
            if(abs(s[i]-s[i+1])!=1){
                k=1;
                break;
            }
        }
        if(k==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

}