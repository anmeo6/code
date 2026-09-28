#include <bits/stdc++.h>
using namespace std;
struct student{
    string MSV;
    string hoten;
    string ngaysinh;
    string lop;
    double GPA;
};
string chuanhoaTen(string hoten){
    stringstream ss(hoten);
    string word, res="";
    while(ss >> word){
        word[0]=toupper(word[0]);
        for(int i=1;i< word.length();i++){
            word[i]=tolower(word[i]);

        }
        res=res+word+" ";
    }
    if(!res.empty())    res.pop_back();
    return hoten=res;
}
string chuanhoangaysinh(string ngaysinh){
    if(ngaysinh[1]=='/'){
        ngaysinh="0"+ngaysinh;
    }
    if(ngaysinh[4]=='/'){
        ngaysinh= ngaysinh.insert(3,"0");
    }
    return ngaysinh;
}
int main(){
    int n;
    cin>>n;

    student sv[100];
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin, sv[n].MSV);
        getline(cin, sv[n].hoten);
        getline(cin, sv[n].ngaysinh);
        getline(cin, sv[n].lop);
        cin>>sv[n].GPA;
        cout<<sv[n].MSV<<" "<<chuanhoaTen(sv[n].hoten)<<" "<<chuanhoangaysinh(sv[n].ngaysinh)<<" "<<sv[n].lop<<" "<<fixed<<setprecision(2)<<sv[n].GPA<<endl;
    }
}