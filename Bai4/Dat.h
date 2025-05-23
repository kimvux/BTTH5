#ifndef DAT_H_INCLUDED
#define DAT_H_INCLUDED
#include "GiaoDich.h"
class Dat : public GiaoDich {
private:
    int LoaiDat;
public:
    void Nhap();
    void Xuat();
    double ThanhTien();
};


#endif // DAT_H_INCLUDED
