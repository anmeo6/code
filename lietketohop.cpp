#include <bits/stdc++.h>
using namespace std;
int n,k,a[100];
set<int> b;vector<int>c;
void backtrack(int pos){
    if(pos>k){
        for(int i=1;i<=k;i++){
            cout<<c[a[i]-1]<<" ";
        }
        cout<<'\n';
    }
    else{
        for(int i=a[pos-1]+1;i<=n-k+pos;i++){
            a[pos]=i;
            backtrack(pos+1);
        }
    }
}
int main(){
    cin>>n>>k;
    int so;
    for(int i=0;i<n;i++){
        cin>>so;
        b.insert(so);
    }
    for(auto x:b)   c.push_back(x);
    n=c.size();
    backtrack(1);
    return 0;
}
