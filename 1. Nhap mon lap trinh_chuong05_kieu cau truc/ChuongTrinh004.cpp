#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct PHANSO
{
	int Tu;
	int Mau;
};
void Nhap(PHANSO&);
void Xuat(PHANSO);
void KiemTraDuong(PHANSO);
PHANSO Tong(PHANSO, PHANSO);

int main()
{
	PHANSO A, B;
	cout << "Cau 1:\nNhap phan so A\n";
	Nhap(A);
	cout << "Phan so A: ";
	Xuat(A);
	cout << "\n\nNhap phan so B\n";
	Nhap(B);
	cout << "Phan so B: ";
	Xuat(B);
	cout << "\n\nCau 2:\nKiem tra phan so A";
	KiemTraDuong(A);
	PHANSO C = Tong(A, B);
	cout << "\n\nCau 3:\nTong phan so A va B la phan so C: ";
	Xuat(C);
	cout << endl;
	return 0;
}
void Nhap(PHANSO& a)
{
	cout << "Nhap tu: ";
	cin >> a.Tu;
	cout << "Nhap mau: ";
	cin >> a.Mau;
}
void Xuat(PHANSO a)
{
	cout << a.Tu << "/" << a.Mau;
}
void KiemTraDuong(PHANSO a)
{
	if (a.Tu * a.Mau > 0)
		cout << "\nKet qua: Phan so duong.";
}
PHANSO Tong(PHANSO a, PHANSO b)
{
	PHANSO temp;
	temp.Tu = a.Tu * b.Mau + b.Tu * a.Mau;
	temp.Mau = a.Mau * b.Mau;
	return temp;
}
