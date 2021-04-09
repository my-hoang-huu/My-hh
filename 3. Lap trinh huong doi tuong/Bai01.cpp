#include <iostream>
using namespace std;
struct PHANSO
{
    float TU;
    float MAU;
};
void Nhap(PHANSO&);
void Xuat(PHANSO);
PHANSO Tong(PHANSO, PHANSO);
void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);
PHANSO Tong(PHANSO[], int);
PHANSO Sosanh(PHANSO, PHANSO);
PHANSO LonNhat(PHANSO[], int);
int main()
{
    PHANSO a, b, c;
    cout << "Nhap phan so A:";
    Nhap(a);
    cout << "Phan so A: ";
    Xuat(a);
    cout << "\n\nNhap phan so B: ";
    Nhap(b);
    cout << "Phan so B: ";
    Xuat(b);
    c = Tong(a, b);
    cout << "\n\nTong cua A va B: ";
    Xuat(c);

    PHANSO k, l;
    PHANSO p[10];
    int n;
    cout << "\nNhap mang mot chieu cac phan so: ";
    Nhap(p, n);
    Xuat(p, n);
    k = Tong(p, n);
    cout << "\nTong mang cac phan so: ";
    Xuat(k);

    l = LonNhat(p, n);
    cout << "\nPhan so lon nhat mang la: ";
    Xuat(l);
    cout << endl;
    return 1;
}
void Nhap(PHANSO& a)
{
    cout << "\nNhap tu: ";
    cin >> a.TU;
    cout << "Nhap mau: ";
    cin >> a.MAU;
}
PHANSO Tong(PHANSO a, PHANSO b)
{
    PHANSO c;
    c.TU = (a.TU * b.MAU + a.MAU * b.TU);
    c.MAU = a.MAU * b.MAU;
    return c;
}
void Xuat(PHANSO a)
{
    cout << "\nTu: " << a.TU;
    cout << "  Mau: " << a.MAU;
}
void Nhap(PHANSO a[], int& n)
{
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Nhap(a[i]);
    }
}
void Xuat(PHANSO a[], int n)
{
    cout << "\nMang cac phan so: ";
    for (int i = 0; i < n; i++)
    {
        Xuat(a[i]);
    }
}
PHANSO Tong(PHANSO a[], int n)
{
    PHANSO p = a[0];
    for (int i = 1; i < n; i++)
    {
        p = Tong(p, a[i]);
    }
    return p;
}
PHANSO Sosanh(PHANSO a, PHANSO b)
{
    if (a.TU * b.MAU >= b.TU * a.MAU)
    {
        return a;
    }
    if (a.TU * b.MAU < b.TU * a.MAU)
    {
        return b;
    }
}
PHANSO LonNhat(PHANSO a[], int n)
{
    PHANSO c = a[0];
    for (int i = 1; i < n; i++)
    {
        c = Sosanh(c, a[i]);
    }
    return c;
}
