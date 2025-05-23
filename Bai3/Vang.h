#ifndef VANG_H_INCLUDED
#define VANG_H_INCLUDED
#include "GiaoDich.h"
class Vang : public GiaoDich {
private:
    string LoaiVang;
public:
    void Nhap();
    void Xuat();
    double ThanhTien();
};


#endif // VANG_H_INCLUDED
