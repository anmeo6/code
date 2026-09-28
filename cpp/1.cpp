#include <iostream>
using namespace std;
int n;
char ans[21];
bool isSymmetric(){
    for(int i=1;i<=n/2;i++){
        if(ans[i]!=ans[n-i+1]){
            return false;
        }
    }
    return true;
}
void backtrack(int pos){
    if(pos>n){
        if(isSymmetric()){
            for(int i=1;i<=n;i++){
                cout<<ans[i];
                if(i<n)
                    cout<<" ";
            }
            cout<<endl;
        }
        return ;
    }
    for(char i='0';i<='1';i++){
        ans[pos]=i;
        backtrack(pos+1);
    }
}
int main(){
    cin>>n;
    backtrack(1);
    return 0;
}
