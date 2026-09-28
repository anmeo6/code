#include <bits/stdc++.h>
using namespace std;
int n,a[100001];
int m=0,MAX,cnt=0;
void dodai(){
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>MAX){
            MAX=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==MAX){
            cnt++;
            if(cnt>m){
                m=cnt;
            }
            else{
                cnt=0;
            }
        }
    }
    cout<<m;
}
int main(){
    cin>>n;
    dodai();
}
