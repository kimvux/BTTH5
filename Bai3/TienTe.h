#ifndef TIENTE_H_INCLUDED
#define TIENTE_H_INCLUDED
#include "GiaoDich.h"
class TienTe : public GiaoDich {
private:
    int LoaiTien;
    double TiGia = 1;
public:
    int getLoaiTien();
    void Nhap();
    void Xuat();
    double ThanhTien();
};


#endif // TIENTE_H_INCLUDED
