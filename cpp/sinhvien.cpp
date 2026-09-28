#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string hoten;
    string lop;
    string ngaysinh;
    float gpa;
};
string chuanhoa(string ngaysinh){
    if(ngaysinh[1]=='/'){
        ngaysinh="0"+ngaysinh;
    }
    if(ngaysinh[4]=='/'){
        ngaysinh.insert(3, "0");
    }
    return ngaysinh;
}
void nhap(SinhVien &A){
    getline(cin, A.hoten);
    getline(cin, A.lop);
    getline(cin, A.ngaysinh);
    cin>>A.gpa;
}
void in(SinhVien &A){
    cout<<"B20DCCN001"<<" "<<A.hoten<<" "<<A.lop<<" "<<chuanhoa(A.ngaysinh)<<" "<<fixed<<setprecision(2)<<A.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}