#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct SOPHUC
{
	float Thuc;
	float Ao;
};
void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC Hieu(SOPHUC, SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);
SOPHUC Thuong(SOPHUC, SOPHUC);
SOPHUC LuyThua(SOPHUC, int);

int main()
{
	SOPHUC A;
	cout << "Bai 118: Nhap so phuc A: ";
	Nhap(A);
	cout << "\nBai 119: So phuc A: ";
	Xuat(A);
	SOPHUC B;
	cout << "\nNhap so phuc B: ";
	Nhap(B);
	SOPHUC S = Tong(A, B);
	cout << "\nBai 120: Tong hai so phuc A va B la so phuc S:  ";
	Xuat(S);
	SOPHUC H = Hieu(A, B);
	cout << "\nBai 120: Hieu hai so phuc A va B la so phuc H:  ";
	Xuat(H);
	SOPHUC T = Tich(A, B);
	cout << "\nBai 121: Tich hai so phuc A va B la so phuc T:  ";
	Xuat(T);
	SOPHUC I = Thuong(A, B);
	cout << "\nBai 122: Thuong hai so phuc A va B la so phuc I:  ";
	Xuat(I);
	int n;
	cout << "\nNhap bac luy thua";
	cin >> n;
	SOPHUC L = LuyThua(A, n);
	cout << "\nBai 123: Luy thua hai so phuc A va B la so phuc L:  ";
	Xuat(L);
	cout << endl;
	return 1;
}
void Nhap(SOPHUC& a)
{
	cout << "\nNhap phan thuc: ";
	cin >> a.Thuc;
	cout << "Nhap phan ao: ";
	cin >> a.Ao;
}
void Xuat(SOPHUC a)
{
	cout << a.Thuc << " + " << a.Ao << "*i";
}
SOPHUC Tong(SOPHUC a, SOPHUC b)
{
	SOPHUC s;
	s.Thuc = a.Thuc + b.Thuc;
	s.Ao = a.Ao + b.Ao;
	return s;
}
SOPHUC Hieu(SOPHUC a, SOPHUC b)
{
	SOPHUC s;
	s.Thuc = a.Thuc - b.Thuc;
	s.Ao = a.Ao - b.Ao;
	return s;
}
SOPHUC Tich(SOPHUC a, SOPHUC b)
{
	SOPHUC s;
	s.Thuc = a.Thuc * b.Thuc - a.Ao * b.Ao;
	s.Ao = a.Thuc * b.Ao + a.Ao * b.Thuc;
	return s;
}
SOPHUC Thuong(SOPHUC a, SOPHUC b)
{
	SOPHUC s;
	s.Thuc = (a.Thuc * b.Thuc - a.Ao * b.Ao) / (b.Thuc * b.Thuc + b.Ao * b.Ao);
	s.Ao = a.Ao * b.Thuc - a.Thuc * b.Ao / (b.Thuc * b.Thuc + b.Ao * b.Ao);
	return s;
}
SOPHUC LuyThua(SOPHUC a, int n)
{
	SOPHUC temp = { 1, 0 };
	for (int i = 1; i <= n; i++)
	{
		temp = Tich(temp, a);
	}
	return temp;
}
