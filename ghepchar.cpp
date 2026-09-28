#include <bits/stdc++.h>
using namespace std;
char c;vector<char> chars;char a[1001];
bool visited[1001];
bool nguyenam(char x){
    if(x=='A'|| x=='E'){
        return true;
    }
    else{
        return false;
    }
}
bool chuoi(int len){
    for(int i=1;i<len-1;i++){
        if(nguyenam(a[i]) && !nguyenam(a[i-1]) && !nguyenam(a[i+1])){
            return false;
        }
    }
    return true;
}
void Try(int pos){
    int len=chars.size();
    for(int i=0;i<len;i++){
        if(!visited[i]){
            visited[i]=1;
            a[pos]=chars[i];
            if(pos==len-1){
                if(chuoi(len)){
                    for(int i=0;i<len;i++){
                        cout<<a[i];
                    }
                    cout<<endl;
                }
            }
            else{
                Try(pos+1);
            }
            visited[i]=0;
        }
    }
}
int main (){
    cin>>c;
    for(int i='A';i<=c;i++){
        chars.push_back(i);
    }
    Try(0);
}
