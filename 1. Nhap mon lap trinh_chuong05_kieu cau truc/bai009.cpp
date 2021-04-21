#include<iostream>
#include<iomanip>
using namespace std;
struct DONTHUC
{
	float a;
	int n;
};
void Nhap(DONTHUC&);
void Xuat(DONTHUC);
int main()
{
	DONTHUC A;
	cout << "Nhap don thuc: ";
	Nhap(A);
	cout << "\nDon thuc vua nhap: ";
	Xuat(A);
	return 1;
}
void Nhap(DONTHUC& P)
{
	cout << "\nNhap he so ";
	cin >> P.a;
	cout << "Nhap so mu ";
	cin >> P.n;
}
void Xuat(DONTHUC P)
{
	cout << "f(x) = " << P.a << " * x^" << P.n;
}
