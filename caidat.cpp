#include "thuvien.h"
// Hàm tạo node mới
nodePtr taoNode(sinhVien sv) {
    nodePtr p = new node;
    p->data = sv;
    p->link = NULL;
    return p;
}

void nhapSoLuongSinhVien(int &n) {
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
}

void nhapThongTinSinhVien(nodePtr &head, int n) {
    sinhVien sv;
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":\n";
        nhap(sv);
        themSinhVien(head, sv);
    }
}

void nhap(sinhVien &sv) {
    cout << "Nhap ma sinh vien: ";
    cin >> sv.masv;
    cin.ignore();
    cout << "Nhap ten sinh vien: ";
    cin.get(sv.tensv, 30);
    cout << "Nhap diem: ";
    cin >> sv.diem;
}

void themSinhVien(nodePtr &head, sinhVien sv) {
    nodePtr p = taoNode(sv);
    if (head == NULL) {
        head = p;
    } else {
        nodePtr temp = head;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        temp->link = p;
    }
}

void xuat(sinhVien sv) {
    cout << "Ma sinh vien: " << sv.masv << endl;
    cout << "Ten sinh vien: " << sv.tensv << endl;
    cout << "Diem: " << sv.diem << endl;
}

// Hàm xuất danh sách sinh viên
void xuatDanhSach(nodePtr head) {
    for (nodePtr p = head; p != NULL; p = p->link) {
        xuat(p->data);
        cout << "---------------\n";
    }
}