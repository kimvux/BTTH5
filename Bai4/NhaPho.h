#ifndef NHAPHO_H_INCLUDED
#define NHAPHO_H_INCLUDED
#include "GiaoDich.h"
class NhaPho : public GiaoDich {
private:
    int LoaiNha;
    string DiaChi;
public:
    void Nhap();
    void Xuat();
    double ThanhTien();
};


#endif // NHAPHO_H_INCLUDED
