#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int freq[256]={0};
    for(char a:s){
        freq[tolower(c)]++;
    }
    char b[26];
    int t[26];
    int k=0;
    for(int i='a';i<='z';i++){
        if(freq[i]>0){
            b[k]=(char)i;
            t[k]=freq[i];
            k++;
        }
    }
    for()
}