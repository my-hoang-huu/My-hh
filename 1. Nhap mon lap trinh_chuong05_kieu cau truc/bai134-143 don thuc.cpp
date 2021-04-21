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
DONTHUC Tich(DONTHUC, DONTHUC);
DONTHUC operator*(DONTHUC, DONTHUC);
DONTHUC Thuong(DONTHUC, DONTHUC);
DONTHUC operator/(DONTHUC, DONTHUC);
DONTHUC DaoHamCap1(DONTHUC);
DONTHUC DaoHamCapk(DONTHUC, int);
int main()
{
	DONTHUC A;
	cout << "Bai 135: Nhap don thuc: ";
	Nhap(A);
	cout << "\nBai 136: Don thuc vua nhap: ";
	Xuat(A);
	DONTHUC B;
	cout << "\nNhap don thuc B: ";
	Nhap(B);
	DONTHUC C = Tich(A, B);
	cout << "\nBai 137: Tich don thuc A va B la don thuc C: ";
	Xuat(C);
	DONTHUC D = Thuong(A, B);
	cout << "\nBai 138: Thuong don thuc A va B la don thuc D: ";
	Xuat(D);
	DONTHUC E = DaoHamCap1(A);
	cout << "\nBai 139: Dao ham bac 1 cua don thuc A la don thuc E: ";
	Xuat(E);
	int k;
	cout << "\nNhap bac dao ham k: ";
	cin >> k;
	DONTHUC H = DaoHamCapk(A, k);
	cout << "\nBai 140: Dao ham bac " << k << " cua don thuc A la don thuc H: ";
	Xuat(H);
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
DONTHUC Tich(DONTHUC x, DONTHUC y)
{
	DONTHUC t;
	t.a = x.a * y.a;
	t.n = x.n + y.n;
	return t;
}
DONTHUC Thuong(DONTHUC x, DONTHUC y)
{
	DONTHUC t;
	t.a = x.a / y.a;
	t.n = x.n - y.n;
	return t;
}
DONTHUC DaoHamCap1(DONTHUC x)
{
	x.a = x.a * x.n;
	x.n = x.n - 1;
	if (x.n < 0)
		x.a = 0;
	return x;
}
DONTHUC DaoHamCapk(DONTHUC x, int k)
{
	DONTHUC temp;
	temp.a = x.a;
	temp.n = x.n;
	for (int i = 1; i <= k; i++)
	{
		temp = DaoHamCap1(temp);
		if (temp.n < 0)
		{
			temp.a = 0;
			return temp;
		}
	}
	return temp;
}
DONTHUC operator*(DONTHUC x, DONTHUC y)
{
	DONTHUC t;
	t.a = x.a * y.a;
	t.n = x.n + y.n;
	return t;
}
DONTHUC operator/(DONTHUC x, DONTHUC y)
{
	DONTHUC t;
	t.a = x.a / y.a;
	t.n = x.n - y.n;
	return t;
}