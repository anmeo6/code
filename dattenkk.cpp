#include<bits/stdc++.h>
using namespace std;
vector<string> an;
int n,k,a[1000];
set<string> s;
void Try(int pos){
    if(pos>k){
        for(int i=1;i<=k;i++){
            cout<<an[a[i]-1]<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=a[pos-1]+1;i<=n+pos-k;i++){
            a[pos]=i;
            Try(pos+1);
        }
    }
}
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;s.insert(x);
    }
    for(auto x:s)   an.push_back(x);
    n=s.size();
    Try(1);
    return 0;
}
