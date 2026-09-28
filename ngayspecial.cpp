#include <bits/stdc++.h>
using namespace std;
int main(){
    string s="";
    int cnt=0;
    set<string> special;
    vector<string> day={"02","20","22"};
    string month="02";
    vector<string> year={"2000","2002","2020","2022","2220","2222","2202","2200"};
    for(auto x:year){
        for(int i=0;i<day.size();i++){
            s=""+day[i]+"/"+month+"/"+x;
            special.insert(s);
            s="";
            cnt++;
        }
    }
    for(auto k:special){
        cout<<k<<endl;
    }
    return 0;
}


