#ifndef GIAODICH_H_INCLUDED
#define GIAODICH_H_INCLUDED
#include <bits/stdc++.h>
using namespace std;
class GiaoDich {
protected:
    string MGD;
    double DonGia;
    double DienTich;
    int d,m,y;
public:
    void Nhap();
    void Xuat();
    int getM();
    int getY();
};


#endif // GIAODICH_H_INCLUDED
