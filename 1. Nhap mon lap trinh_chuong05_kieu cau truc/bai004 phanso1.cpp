#include<iostream>
#include<iomanip>
using namespace std;
struct PHANSO
{
	int Tu;
	int Mau;
};
void Nhap(PHANSO&);
void Xuat(PHANSO);
int main()
{
	PHANSO A;
	cout << "Nhap phan so A: ";
	Nhap(A);
	cout << "\nPhan so A";
	Xuat(A);
	return 1;
}
void Nhap(PHANSO& P)
{
	cout << "\nNhap tu: ";
	cin >> P.Tu;
	cout << "Nhap mau: ";
	cin >> P.Mau;
}
void Xuat(PHANSO P)
{
	cout << "\nTu = " << P.Tu;
	cout << "\nMau = " << P.Mau;
}
