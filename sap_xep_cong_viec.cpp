#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],b[n];
        vector<pair<int,int>> c;
        for(int i=0;i<n;i++)    cin>>a[i];
        for(int i=0;i<n;i++)    cin>>b[i];
        for(int i=0;i<n;i++){
            c.push_back({b[i],a[i]});
        }
        sort(c.begin(),c.end());
        int ans=0;
        int lastFirst=-1;
        for(auto x:c){
            int start=x.second;
            int finish=x.first;
            if(start>=lastFirst){
                ans++;
                lastFirst=finish;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}