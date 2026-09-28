#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1000];vector<int>so(1001);
int sum=0;int cnt=0;
void Try(int pos,int last){
    for(int i=n;i>=last+1;i--){
        a[pos]=so[i];
        sum+=a[pos];
        if(sum==k){
            for(int j=1;j<=pos;j++){
                cout<<a[j]<<" ";
            }
            cnt++;
            cout<<"\n";
        }
        else if (sum<k){
            Try(pos+1,i);
        }
        sum-=a[pos];

    }
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>so[i];
    }
    Try(1,0);
    cout<<cnt;
}
