#include <bits/stdc++.h>
using namespace std;
vector<int> digit(1001,0);
int main(){
    int t;cin>>t;
    while(t--){
        digit.assign(1001,0);
        int n,m;
        cin>>n>>m;
        int i=m;
        int k=n-1;
        for(int i=m-1;i>=0;i--){
            if(k>=9){
                digit[i]=9;
                k=k-9;
            }
            else if(k<9){
                digit[i]=k;
                k=0;
                break;
            }
        }
        digit[0]++;
        if(digit[0]>9){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<m;i++){
            cout<<digit[i];
        }
        cout<<"\n";
    }
}
