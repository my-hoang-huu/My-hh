#include<iostream>
#include<iomanip>
using namespace std;
struct HONSO
{
	int Nguyen; 
	int Tu;
	int Mau;
};
void Nhap(HONSO&);
void Xuat(HONSO);
int main()
{
	HONSO A;
	cout << "Nhap hon so A: ";
	Nhap(A);
	cout << "\nHon so A";
	Xuat(A);
	return 1;
}
void Nhap(HONSO& P)
{
	cout << "\nNhap nguyen: ";
	cin >> P.Nguyen;
	cout << "Nhap tu: ";
	cin >> P.Tu;
	cout << "Nhap mau: ";
	cin >> P.Mau;
}
void Xuat(HONSO P)
{
	cout << "\nNguyen = " << P.Nguyen;
	cout << "\nTu = " << P.Tu;
	cout << "\nMau = " << P.Mau;
}
