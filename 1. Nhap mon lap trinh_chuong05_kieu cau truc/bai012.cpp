#include<iostream>
#include<iomanip>
using namespace std;
struct DIEM
{
	float x;
	float y;
};
struct TAMGIAC
{
	DIEM A;
	DIEM B;
	DIEM C;
};
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);
int main()
{
	TAMGIAC A;
	Nhap(A);
	Xuat(A);
	return 1;
}
void Nhap(DIEM& P)
{
	cout << "\nx = ";
	cin >> P.x;
	cout << "y = ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")";
}
void Nhap(TAMGIAC& a)
{
	cout << "Nhap toa do ba dinh: \n1: ";
	Nhap(a.A);
	cout << "\n2: ";
	Nhap(a.B);
	cout << "\n3: ";
	Nhap(a.C);
}
void Xuat(TAMGIAC b)
{
	cout << "\nTam giac vua nhap co toa do ba dinh lan luot la: ";
	cout << "\nA = ";
	Xuat(b.A);
	cout << "\nB = ";
	Xuat(b.B);
	cout << "\nC = ";
	Xuat(b.C);
}

