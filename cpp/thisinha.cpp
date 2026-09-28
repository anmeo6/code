#include <bits/stdc++.h>
using namespace std;
struct ThiSinh
{
    string hoten;
    string ngaysinh;
    double mon1;
    double mon2;
    double mon3;
    double tong;
};
string chuanhoangaysinh(string ngaysinh){
    if(ngaysinh[1]=='/'){
        ngaysinh="0"+ngaysinh;
    }
    if(ngaysinh[4]=='/'){
        ngaysinh= ngaysinh.insert(3,"0");
    }
    return ngaysinh;
}
void nhap(ThiSinh &A){
    getline(cin, A.hoten);
    getline(cin, A.ngaysinh);
    cin>>A.mon1>>A.mon2>>A.mon3;
    A.tong=A.mon1+A.mon2+A.mon3;
}
void in(ThiSinh &A){
    cout<<A.hoten<<" "<<chuanhoangaysinh(A.ngaysinh)<<" "<<fixed<<setprecision(1)<<A.tong;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
