#include <bits/stdc++.h>
using namespace std;
set<string> b;
int n,k;
int a[100];
vector<string> s;
void backtrack(int pos){
    for(int i=a[pos-1]+1;i<=n-k+pos;i++){
        a[pos]=i;
        if(pos==k){
            for(int j=1;j<=k;j++){
                cout<<s[a[j]-1]<<" ";
            }
            cout<<endl;

        }
        else{
            backtrack(pos+1);
        }
    }
}

int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        string x;
        cin>>x;
        b.insert(x);
    }
    for(auto i:b){
        s.push_back(i);
    }
    n=s.size();
    sort(s.begin(),s.end());
    a[0]=0;
    backtrack(1);
}
