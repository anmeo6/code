#include<iostream>
#include<vector>
using namespace std;
int n;
vector<int> a;vector<int> b;
void dayso(vector<int> &a){
    int c;
    for (int i=0;i<a.size()-1;i++){
        c=a[i]+a[i+1];
        b.push_back(c);
    }
    cout<<"[";
    if(!a.empty()){
        cout<<a[0];
        for(int i=1;i<a.size();i++){
            cout<<" "<<a[i];
        }
    }
    cout<<"]"<<'\n';
    a.clear();
    for(auto x:b)   a.push_back(x);
    b.clear();
    if(a.size()>1){
        dayso(a);
    }
    else{
        cout<<"["<<a[0]<<"]"<<'\n';
        a.clear();
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        a.clear();
        cin>>n;
        int k;
        for(int i=0;i<n;i++){
            cin>>k;
            a.push_back(k);
        }
        if(a.size()<2){
            cout<<"["<<a[0]<<"]"<<"\n";
        }
        else
            dayso(a);
    }
}
