#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> a;
    string s;
    while((cin>> s)){
        if(s=="push"){
            int x;cin>>x;
            a.push(x);
        }
        else if(s=="pop"){
            a.pop();
        }
        else if(s=="show"){
            if(a.empty()){
                cout<<"empty"<<endl;
            }
            else{
                stack<int> tmp=a;
                vector<int> o;
                while(!tmp.empty()){
                    o.push_back(tmp.top());
                    tmp.pop();
                }
                reverse(o.begin(),o.end());
                for(auto x:o)   cout<<x<<" ";
                cout<<endl;
            }
        }
    }
}
