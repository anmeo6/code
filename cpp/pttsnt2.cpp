#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            count++;
            n=n/i;
        }
        if(count>0){
            cout<<i<<" "<<count<<endl;
        }
        count=0;
    }
    if(n>=2){
        cout<<n<<" "<<1<<endl;
    }
    cout<<endl;
    return 0;
}