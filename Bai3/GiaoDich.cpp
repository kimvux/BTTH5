#include "GiaoDich.h"

void GiaoDich::Nhap(){
    cout << "Nhap ma giao dich: ";
    cin >> MGD;
    cout << "Nhap ngay giao dich: ";
    cin >> NgayGD;
    cout << "Nhap don gia: ";
    cin >> DonGia;
    cout << "Nhap vao so luong: ";
    cin >> SoLuong;
}
void GiaoDich::Xuat(){
    cout << MGD << '\t' << NgayGD << '\t' << fixed << setprecision(2) << DonGia << '\t' << SoLuong << '\t';
}
