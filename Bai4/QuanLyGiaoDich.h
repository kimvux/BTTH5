#ifndef QUANLYGIAODICH_H_INCLUDED
#define QUANLYGIAODICH_H_INCLUDED
#include "Dat.h"
#include "NhaPho.h"
#include "CanHoChungCu.h"
class QuanLyGiaoDich {
private:
    vector<Dat> d;
    vector<NhaPho> n;
    vector<CanHoChungCu> c;
public:
    void Nhap();
    void Xuat();
    void SoLuongTungLoai();
    void TrungBinhThanhTienCanHoChungCu();
    void ThanhTienNhaPhoCaoNhat();
    void ListGiaoDich12_2024();
};


#endif // QUANLYGIAODICH_H_INCLUDED
