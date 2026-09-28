#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        int x=s/7;
        int luongthuc=n*(s-x);
        int anhet=m*s;
        if(luongthuc-anhet>0){
            for(int i=1;i<=s-x;i++){
                if(n*i>=anhet){
                    cout<<i;
                    break;
                }
            }
        }
        else if(luongthuc-anhet==0) cout<<(s-x);
        else{
            cout<<-1;
        }
        cout<<'\n';
    }
}
