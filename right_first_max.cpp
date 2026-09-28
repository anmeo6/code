#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),ans(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=a[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            else{
                ans[i]=-1;
            }
            st.push(a[i]);
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}