#include <iostream>
using namespace std;
struct sinhVien {
    char masv[10], tensv[30];
    float diem;
};

struct node {
    sinhVien data;
    node *link;
};
typedef node *nodePtr;
nodePtr taoNode(sinhVien sv);
void nhap(sinhVien &sv);
void themSinhVien(nodePtr &head, sinhVien sv);
void nhapSoLuongSinhVien(int &n);
void nhapThongTinSinhVien(nodePtr &head, int n);
void xuat(sinhVien sv);
void xuatDanhSach(nodePtr head);
#ifndef SV_LINKEDLIST_THUVIEN_H
#define SV_LINKEDLIST_THUVIEN_H

#endif //SV_LINKEDLIST_THUVIEN_H
