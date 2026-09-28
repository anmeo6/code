#include <bits/stdc++.h>
using namespace std;
int a[101],n;
vector <string> res;
vector<int> cur;
string changestring(vector<int> v){
    string s="";
    for(int i=0;i<v.size();i++){
        s+= to_string(v[i]);
        if( i!=v.size()-1) s+=" ";
    }
    return s;
}
void backtrack(int pos){
    for(int i=pos;i<n;i++){
        if(cur.empty() || a[i]>cur.back()){
            cur.push_back(a[i]);
            if(cur.size()>=2){
                res.push_back(changestring(cur));
            }
            backtrack(i+1);
            cur.pop_back();
        }
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    backtrack(0);
    sort(res.begin(),res.end());
    for(auto x:res){
        cout<<x<<endl;
    }
    return 0;
}
