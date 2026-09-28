#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> a;
    vector<string>adj[100];
    int n;cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++){
        string x;
        getline(cin,x);
        stringstream ss(x);
        int s;
        while(ss>>s){
            if(i<s)
                a.push_back({i,s});
        }
    }
    sort(a.begin(),a.end());
    for(auto k:a){
        cout<<k.first<<" "<<k.second<<endl;
    }
    return 0;
}
