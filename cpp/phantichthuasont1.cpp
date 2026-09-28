#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        for(int i=2;i<=sqrt(n);i++){
            while(n%i==0){
                count++;
                n=n/i;
            }
            if(count>0){
                cout<<i<<" "<<count<<" ";
            }
            count=0;
        }
        if(n>=2){
            cout<<n<<" "<<1<<" ";
        }
        cout<<endl;
    }
}