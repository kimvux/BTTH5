#ifndef QUANLYGIAODICH_H_INCLUDED
#define QUANLYGIAODICH_H_INCLUDED
#include "Vang.h"
#include "TienTe.h"
class QuanLyGiaoDich {
private:
    vector<Vang> v;
    vector<TienTe> t;
public:
    void Nhap();
    void Xuat();
    void ThanhTienVangCaoNhat();
    void ThanhTienEUROThapNhat();
    void ListThanhTienTren1Ty();
};


#endif // QUANLYGIAODICH_H_INCLUDED
