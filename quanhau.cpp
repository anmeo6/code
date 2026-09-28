#include <bits/stdc++.h>
using namespace std;
int n,cnt=0;
int cot[100],d1[100],d2[100],x[1000];
void Try(int pos){
    for(int i=1;i<=n;i++){
        if(cot[i]==1 && d1[pos-i+n]==1 && d2[pos+i-1]==1){
            x[pos]=i;
            cot[i]=d1[pos-i+n]=d2[pos+i-1]=0;
            if(pos==n){
                cnt++;
                printArray(pos,n);
            }
            else{
                Try(pos+1);
            }
            cot[i]=d1[pos-i+n]=d2[pos+i-1]=1;
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cnt=0;
        cin>>n;
        for(int i=0;i<=n;i++) cot[i]=1;
        for(int i=0;i<=2*n;i++) d1[i]=d2[i]=1;
        Try(1);
        cout<<cnt<<endl;
    }
}
