#include <bits/stdc++.h>
using namespace std;
vector<int> a,b;
vector<pair<int,int>> cv;
bool cmp(pair<int,int>a,pair<int,int> b){
    return a.second<b.second;
}
int  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        a.resize(n);
        b.resize(n);
        cv.clear();
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            cv.push_back({a[i],b[i]});
        }
        sort(cv.begin(),cv.end(),cmp);
        int x=cv[0].second;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(x<=cv[i].first){
                x=cv[i].second;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
