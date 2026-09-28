#include <bits/stdc++.h>
using namespace std;
int n;
char cat[1000];
char a[2]={'A','H'};
bool check(){
    for(int i=1;i<=n;i++){
        if(cat[i]=='H'&& cat[i+1]=='H'){
            return false;
        }
    }
    return true;
}
void backtrack(int pos){
    for(int i=0;i<2;i++){
        cat[pos]=a[i];
        if(pos==n){
            if(cat[1]=='H' && cat[n]=='A'){
                if(check()){
                    for(int i=1;i<=n;i++){
                        cout<<cat[i];
                    }
                    cout<<endl;
                }
            }
        }
        else
            backtrack(pos+1);
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n;
        backtrack(1);
    }
}
