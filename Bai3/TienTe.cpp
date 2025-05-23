#include "TienTe.h"

void TienTe::Nhap(){
    this->GiaoDich::Nhap();
    cout << "Nhap loai tien te:\n";
    cout << "1. Viet Nam\n";
    cout << "2. USD\n";
    cout << "3. EURO\n";
    cin >> LoaiTien;
    if (LoaiTien != 1){
        cout << "Nhap ti gia: ";
        cin >> TiGia;
        while (TiGia <= 0){
            cout << "Moi ban nhap lai: ";
            cin >> TiGia;
        }
    }
}
void TienTe::Xuat(){
    this->GiaoDich::Xuat();
    if (LoaiTien == 1){
        cout << "VND" << '\t' << TiGia;
    }
    else if (LoaiTien == 2){
        cout << "USD" << '\t' << TiGia;
    }
    else {
        cout << "EURO" << '\t' << TiGia;
    }
}
double TienTe::ThanhTien(){
    return SoLuong*DonGia*TiGia;
}
int TienTe::getLoaiTien(){
    return LoaiTien;
}
