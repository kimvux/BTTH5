#include "QuanLyGiaoDich.h"

void QuanLyGiaoDich::Nhap(){
    cout << "Nhap so luong giao dich Dat: ";
    int x;
    cin >> x;
    for (int i=0 ; i<x ; ++i){
        Dat a;
        a.Nhap();
        d.push_back(a);
    }
    cout << "Nhap so luong giao dich Nha Pho: ";
    cin >> x;
    for (int i=0 ; i<x ; ++i){
        NhaPho a;
        a.Nhap();
        n.push_back(a);
    }
    cout << "Nhap so luong giao dich Can Ho Chung Cu: ";
    cin >> x;
    for (int i=0 ; i<x ; ++i){
        CanHoChungCu a;
        a.Nhap();
        c.push_back(a);
    }
}
void QuanLyGiaoDich::Xuat(){
    cout << "\n==============Danh sach giao dich Dat==============\n";
    if (d.empty()) cout << "Danh sach trong....\n";
    for (int i=0 ; i<d.size() ; ++i){
        d[i].Xuat();
        cout << endl;
    }
    cout << "\n============Danh sach giao dich Nha Pho============\n";
    if (n.empty()) cout << "Danh sach trong....\n";
    for (int i=0 ; i<n.size() ; ++i){
        n[i].Xuat();
        cout << endl;
    }
    cout << "\n========Danh sach giao dich Can Ho Chung Cu========\n";
    if (c.empty()) cout << "Danh sach trong....\n";
    for (int i=0 ; i<c.size() ; ++i){
        c[i].Xuat();
        cout << endl;
    }
}
void QuanLyGiaoDich::SoLuongTungLoai(){
    cout << "\n===================================================\n";
    cout << "So luong giao dich Dat: " << d.size() << endl;
    cout << "So luong giao dich Nha Pho: " << n.size() << endl;
    cout << "So luong giao dich Can Ho Chung Cu: " << c.size() << endl;
}
void QuanLyGiaoDich::TrungBinhThanhTienCanHoChungCu(){
    cout << "\n===================================================\n";
    if (c.empty()){
        cout << "Danh sach giao dich Can Ho Chung Cu trong.\n";
        return;
    }
    double sum = 0;
    for (int i=0 ; i<c.size() ; ++i)
        sum += c[i].ThanhTien();
    cout << "Trung binh thanh tien cua giao dich Can Ho Chung Cu: " << fixed << setprecision(0) << sum/c.size() << endl;
}
void QuanLyGiaoDich::ThanhTienNhaPhoCaoNhat(){
    cout << "\n===================================================\n";
    if (n.empty()){
        cout << "Danh sach giao dich Nha Pho trong.\n";
        return;
    }
    double maxNhaPho = 0;
    int pos = -1;
    for (int i=0 ; i<n.size() ; ++i){
        if (n[i].ThanhTien() > maxNhaPho){
            maxNhaPho = n[i].ThanhTien();
            pos = i;
        }
    }
    cout << "Giao dich Nha Pho co gia tri cao nhat:\n";
    n[pos].Xuat();
    cout << "\nThanh tien: " << fixed << setprecision(0) << maxNhaPho << endl;
}
void QuanLyGiaoDich::ListGiaoDich12_2024(){
    cout << "\n===================================================\n";
    if (d.empty() && c.empty() && n.empty()){
        cout << "Danh sach giao dich trong\n";
        return;
    }
    int count = 0;
    cout << "Danh sach giao dich thang 12/2024:\n";
    for (int i=0 ; i<d.size() ; ++i){
        if (d[i].getM() == 12 && d[i].getY() == 2024){
            d[i].Xuat();
            cout << endl;
            count++;
        }
    }
    for (int i=0 ; i<n.size() ; ++i){
        if (n[i].getM() == 12 && n[i].getY() == 2024){
            n[i].Xuat();
            cout << endl;
            count++;
        }
    }
    for (int i=0 ; i<c.size() ; ++i){
        if (c[i].getM() == 12 && c[i].getY() == 2024){
            c[i].Xuat();
            cout << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "Khong co giao dich trong thang 12/2024\n";
}
