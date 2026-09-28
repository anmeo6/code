#include <iostream>
#include <string>
using namespace std;
struct SinhVien
{
    string msv;
    string hoten;
    string lop;
    float diemTHCS2;
    float diemCPP;
};
int main (){
    int n;
    cin>>n;
    SinhVien* sv= new SinhVien[n];
    for(int i=0;i<n;i++){
        cin >> sv[i].msv;
        cin.ignore();
        getline(cin,sv[i].hoten);
        cin >>sv[i].lop>>sv[i].diemTHCS2>>sv[i].diemCPP;

    }
    for(int i=0;i<n;i++){
        cout << sv[i].msv  <<" "<< sv[i].hoten <<" "<< sv[i].lop <<" "<<sv[i].diemTHCS2 <<" "<< sv[i].diemCPP <<endl;
    }
    for(int i=0;i<n;i++){
        if(sv[i].diemCPP >=7.0){
                cout << sv[i].msv  <<" "<< sv[i].hoten <<" "<< sv[i].lop <<" "<<sv[i].diemTHCS2 <<" "<< sv[i].diemCPP <<endl;
        }
    }
    
}
