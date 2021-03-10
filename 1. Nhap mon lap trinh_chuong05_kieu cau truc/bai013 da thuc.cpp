#include<iostream>
#include<iomanip>
using namespace std;
struct DATHUC
{
	float a[50];
	int n;
};
void Nhap(DATHUC&);
void Xuat(DATHUC);
int main()
{
	DATHUC A;
	cout << "Nhap da thuc: ";
	Nhap(A);
	cout << "\nDa thuc vua nhap: ";
	Xuat(A);
	return 1;
}
void Nhap(DATHUC& f)
{
	cout << "\nNhap bac da thuc: ";
	cin >> f.n;
	cout << "\nNhap he so ";
	for (int i = f.n; i >= 0; i--)
	{
		cout << "a[" << i << "] = ";
		cin >> f.a[i];
	}
}
void Xuat(DATHUC f)
{
	cout << "f(x) = ";
	for (int i = f.n; i > 0; i--)
	{
		cout << f.a[i] << "x^" << i << " + ";
	}
	cout << f.a[0] << endl;
}
