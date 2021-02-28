#include<iostream>
#include<iomanip>
using namespace std;
struct THOIGIAN
{
	int Gio;
	int Phut;
	int Giay;
};
void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);
int main()
{
	THOIGIAN m;
	cout << "Nhap thoi gian: ";
	Nhap(m);
	cout << "\nThoi gian vua nhap: ";
	Xuat(m);
	return 1;
}
void Nhap(THOIGIAN& h)
{
	cout << "\nNhap gio: ";
	cin >> h.Gio;
	cout << "Nhap phut: ";
	cin >> h.Phut;
	cout << "Nhap giay: ";
	cin >> h.Giay;
}
void Xuat(THOIGIAN h)
{
	cout << "\nGio: " << h.Gio;
	cout << "\nPhut: " << h.Phut;
	cout << "\nGiay: " << h.Giay << endl;
	cout << h.Gio << "h " << h.Phut << "m " << h.Giay << "s";
}

