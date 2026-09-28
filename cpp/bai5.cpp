#include <iostream>
#include <algorithm>
using namespace std;

class PhanSo {
private:
    long long tu, mau;
    
public:
    PhanSo(long long t = 0, long long m = 1) : tu(t), mau(m) {}
    
    friend istream& operator>>(istream& is, PhanSo& ps) {
        is >> ps.tu >> ps.mau;
        return is;
    }
    
    friend ostream& operator<<(ostream& os, PhanSo ps) {
        ps.rutGon();
        os << ps.tu << "/" << ps.mau;
        return os;
    }
    
    PhanSo operator+(PhanSo other) {
        long long new_tu = tu * other.mau + other.tu * mau;
        long long new_mau = mau * other.mau;
        return PhanSo(new_tu, new_mau);
    }
    
    void rutGon() {
        long long gcd_val = __gcd(tu, mau);
        tu /= gcd_val;
        mau /= gcd_val;
    }
};

int main() {
    PhanSo p(1,1), q(1,1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}