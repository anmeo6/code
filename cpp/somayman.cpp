#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin>>a;
        int b=a-86;
        if(b%100==0){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
}