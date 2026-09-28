#include <bits/stdc++.h>
using namespace std;
int cnt=1;
struct NhanVien{
    string masv;
    string name;
    string sex;
    string born;
    string dchi;
    string msthue;
    string ngayki;
};
string chuanhoa(string s){
    if(s[1]=='/')   s="0"+s;
    if(s[4]=='/')   s.insert(3,"0");
    return s;
}
void nhap(NhanVien &ds){
    stringstream ss;
    ss<<setfill('0')<<setw(5)<<cnt;
    ds.masv=ss.str();
    cnt++;
    getline(cin>>ws, ds.name);
    getline(cin, ds.sex);
    getline(cin, ds.born);
    getline(cin, ds.dchi);
    getline(cin, ds.msthue);
    getline(cin, ds.ngayki);
    ds.born=chuanhoa(ds.born);
    ds.ngayki=chuanhoa(ds.ngayki);
}
void inds(NhanVien ds[50], int N){
    for(int i=0;i<N;i++){
        cout<<ds[i].masv<<" "<<ds[i].name<<" "<<ds[i].sex<<" "<<ds[i].born<<" "<<ds[i].dchi<<" "<<ds[i].msthue<<" "<<ds[i].ngayki<<endl;
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
