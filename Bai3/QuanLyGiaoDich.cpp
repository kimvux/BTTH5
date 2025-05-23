#include "QuanLyGiaoDich.h"

void QuanLyGiaoDich::Nhap(){
    cout << "Nhap so luong giao dich vang: ";
    int x;
    cin >> x;
    for (int i=0 ; i<x ; ++i){
        Vang a;
        a.Nhap();
        v.push_back(a);
        cout << "=======================================\n";
    }
    cout << "Nhap so luong giao dich tien te: ";
    cin >> x;
    for (int i=0 ; i<x ; ++i){
        TienTe b;
        b.Nhap();
        t.push_back(b);
        cout << "=======================================\n";
    }
}
void QuanLyGiaoDich::Xuat(){
    cout << "\n==========Danh Sach Giao Dich Vang===========\n";
    if (v.empty()) cout << "Danh sach trong....\n";
    for (unsigned long long i=0 ; i<v.size() ; ++i){
        v[i].Xuat();
        cout << endl;
    }
    cout << "\n========Danh Sach Giao Dich Tien Te==========\n";
    if (t.empty()) cout << "Danh sach trong....\n";
    for (unsigned long long i=0 ; i<t.size() ; ++i){
        t[i].Xuat();
        cout << endl;
    }
}
void QuanLyGiaoDich::ThanhTienVangCaoNhat(){
    cout << "\n======Giao Dich Vang Co Thanh Tien Cao Nhat======\n";
    if (v.empty()){
        cout << "Danh sach trong....\n";
        return;
    }
    double maxVang = 0;
    int pos = -1;
    for (unsigned long long i=0 ; i<v.size() ; ++i)
        if (v[i].ThanhTien() > maxVang){
            maxVang = v[i].ThanhTien();
            pos = i;
        }
    v[pos].Xuat();
    cout << "\nThanh tien: " << fixed << setprecision(0) << maxVang << endl;
}
void QuanLyGiaoDich::ThanhTienEUROThapNhat(){
    cout << "\n======Giao Dich EURO Co Thanh Tien Thap Nhat=====\n";
    int count = 0;
    int pos = -1;
    double minEURO = INT_MAX;
    for (unsigned long long i=0 ; i<t.size() ; ++i){
        if (t[i].getLoaiTien() == 3){
            count++;
            if (t[i].ThanhTien() < minEURO){
                pos = i;
                minEURO = t[i].ThanhTien();
            }
        }
    }
    if (count == 0){
        cout << "Khong co giao dich EURO\n";
        return;
    }
    t[pos].Xuat();
    cout << "\nThanh tien: " << fixed << setprecision(0) << minEURO << endl;
}
void QuanLyGiaoDich::ListThanhTienTren1Ty(){
    cout << "\n========Giao Dich Co Thanh Tien Tren 1 Ty========\n";
    if (v.empty() && t.empty()){
        cout << "Danh sach trong....\n";
        return;
    }
    int count = 0;
    for (unsigned long long i=0 ; i<v.size() ; ++i){
        if (v[i].ThanhTien() > 1000000000){
            v[i].Xuat();
            cout << "\nThanh Tien: " << fixed << setprecision(0) << v[i].ThanhTien() << endl;
            count++;
        }
    }
    for (unsigned long long i=0 ; i<t.size() ; ++i){
        if (t[i].ThanhTien() > 1000000000){
            t[i].Xuat();
            cout << "\nThanh Tien: " << fixed << setprecision(0) << t[i].ThanhTien() << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "Khong co giao dich nao thanh tien tren 1 ty\n";
}
