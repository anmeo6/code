#include <bits/stdc++.h>
using namespace std;
int n,k,sum=0; int x[1000],a[1000];
int cnt=0;
void inkq(int pos){
    for(int i=1;i<=pos;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void nhap(){
    for(int i=1;i<=n;i++){
        cin>>x[i];
    }
}
void backtrack(int pos, int last){
    for(int i=n;i>=last+1;i--){
        a[pos]=x[i];
        sum+=a[pos];
        if(sum==k){

            inkq(pos);
            cnt++;
        }
        else if(sum<k){
            backtrack(pos+1,i);
        }
        sum-=a[pos];
    }

}

int main(){
    cin>>n>>k;
    nhap();
    backtrack(1,0);
    cout<<cnt;
    return 0;
}
