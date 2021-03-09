#include<iostream>
#include<iomanip>
using namespace std;
struct SOPHUC
{
	float Thuc;
	float Ao;
};
void Nhap(SOPHUC&);
void Xuat(SOPHUC);
int main()
{
	SOPHUC A;
	cout << "Nhap so phuc A: ";
	Nhap(A);
	cout << "\nSo phuc A";
	Xuat(A);
	return 1;
}
void Nhap(SOPHUC& P)
{
	cout << "\nThuc = ";
	cin >> P.Thuc;
	cout << "Ao = ";
	cin >> P.Ao;
}
void Xuat(SOPHUC P)
{
	cout << "\nThuc = " << P.Thuc;
	cout << "\nAo = " << P.Ao;
}
