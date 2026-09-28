#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vector<ll> a(n),b(m),c(k);
        for(int i=0;i<n;i++)    cin>>a[i];

        for(int i=0;i<m;i++)    cin>>b[i];

        for(int i=0;i<k;i++)    cin>>c[i];
        int i=0,j=0,l=0;
        bool check=false;
        while(i<n && j<m && l<k){
            if(a[i]==b[j] && b[j]==c[l]){
                cout<<a[i]<<" ";
                check=true;
                i++;
                j++;
                l++;
            }
            else{
                int mn=min({a[i],b[j],c[l]});
                if(a[i]==mn)    i++;
                else if(b[j]==mn)   j++;
                else    l++;
            }
        }
        if(!check)  cout<<"NO";
        cout<<"\n";
    }
}
