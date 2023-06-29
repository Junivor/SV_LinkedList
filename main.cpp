#include "thuvien.h"

int main() {
    nodePtr head = NULL;
    int n;

    nhapSoLuongSinhVien(n);
    nhapThongTinSinhVien(head, n);

    cout << "\nDanh sach sinh vien:\n";
    xuatDanhSach(head);

    return 0;
}
