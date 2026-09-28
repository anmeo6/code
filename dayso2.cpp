#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a; vector <int> b; vector<vector<int>> temp;
void dayso(vector<int> a){
    for(int i=0;i<a.size()-1;i++){
        int x=a[i]+a[i+1];
        b.push_back(x);
    }
    a.clear();
    temp.push_back(b);
    for(auto z:b)   a.push_back(z);
    b.clear();
    if(a.size()>1)  dayso(a);
}
int main(){
    int t;cin>>t;
    while(t--){
        a.clear();
        temp.clear();
        cin>>n;
        for(int i=0;i<n;i++){
            int x;cin>>x;a.push_back(x);
        }
        temp.push_back(a);
        dayso(a);
        reverse(temp.begin(),temp.end());
        if(a.size()>1){
            for(auto &x:temp){
                cout<<"[";
                for(int i=0;i<x.size();i++){
                    if(i==0)    cout<<x[i];
                    else    cout<<" "<<x[i];
                }
                cout<<"]";
                cout<<' ';
            }
        }
        else    cout<<"["<<a[0]<<"]";
        cout<<'\n';
    }
}
