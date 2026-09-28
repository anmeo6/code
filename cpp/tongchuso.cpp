#include<iostream>
#include<cmath>
using namespace std;
int tong(int a){
    int n,m=0;
    while(a>0){
        n=a%10;
        m=m+n;
        a=a/10;
    }
    return m;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int b;
        cin>>b;
        while(tong(b)>=10){
            int k=tong(b);
            tong(k);
            b=tong(k);
            
        }
        cout<<tong(b)<<endl;
    }

}