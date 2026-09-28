#include<bits/stdc++.h>
using namespace std;
int n,k,a[101];
vector<int> b;
bool visited[100];
set<vector<int>> s;
void nhap(){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    b.clear();
}
void sum(int pos,int start){
    if(pos==k){
        s.insert(b);
        pos=0;
    }
    for(int i=start;i<n;i++){
        if(visited[i]==0){
            visited[i]=1;
            b.push_back(a[i]);
            sum(pos+a[i],i+1);
            b.pop_back();
            visited[i]=0;
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        nhap();
        sum(0,0);
        if(s.empty()){
            cout<<"-1"<<endl;
        }
        else{
            for(auto x:s){
                for(int i=0;i<x.size();i++){
                    if(i==0)    cout<<"["<<x[i];
                    else{
                        cout<<" "<<x[i];
                    }
                }
                cout<<"]"<<" ";
            }
            cout<<endl;
            s.clear();
        }
    }
    return 0;
}
