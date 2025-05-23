#include "Vang.h"
void Vang::Nhap(){
    this->GiaoDich::Nhap();
    cout << "Nhap loai vang: ";
    cin >> LoaiVang;
}
void Vang::Xuat(){
    this->GiaoDich::Xuat();
    cout << LoaiVang;
}
double Vang::ThanhTien(){
    return SoLuong*DonGia;
}
