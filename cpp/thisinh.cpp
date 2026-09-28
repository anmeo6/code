#include <bits/stdc++.h>
using namespace std;
struct ThiSinh
{
    string HoTen;
    string NgaySinh;
    double Mon1;
    double Mon2;
    double Mon3;
};
void nhap(ThiSinh &ts){
    getline(cin,ts.HoTen);
    getline(cin,ts.NgaySinh);
    cin>>ts.Mon1;
    cin>>ts.Mon2;
    cin>>ts.Mon3;
}
void in(ThiSinh ts){
    double TongDiem=ts.Mon1+ts.Mon2+ts.Mon3;
    cout<<ts.HoTen<<" "<<ts.NgaySinh<<" "<<fixed<<setprecision(1)<<TongDiem;

}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
