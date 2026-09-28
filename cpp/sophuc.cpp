#include <iostream>
#include <string>
using namespace std;
struct SoPhuc
{
    double thuc,ao;
};
SoPhuc binh_phuong_tong(SoPhuc A, SoPhuc B){
    SoPhuc tong;
    tong.thuc=A.thuc+B.thuc;
    tong.ao=A.ao+B.ao;
    SoPhuc ketqua;
    ketqua.thuc=tong.thuc*tong.thuc-tong.ao*tong.ao;
    ketqua.ao=2*tong.thuc*tong.ao;
    return ketqua;
}
void hien_thi(SoPhuc C){
    cout<<C.thuc;
    if(C.ao>=0){
        cout<<" "<<"+"<<" "<<C.ao<<"i";
    }
    else{
        cout<<" "<<"-"<<" "<<-C.ao<<"i";
    }
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        SoPhuc A;
        SoPhuc B;
        cin>>A.thuc>>A.ao>>B.thuc>>B.ao;
        SoPhuc C= binh_phuong_tong(A,B);
        hien_thi(C);
        cout<<endl;
    }
    return 0;
}
