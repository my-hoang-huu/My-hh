#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;
struct MANG
{
	int* a;
	int n;
};
void Nhap(MANG&);
void Xuat(MANG);

int main()
{
	MANG A;
	cout << "Nhap mang A: ";
	Nhap(A);
	cout << "\nMang A (gia tri trong doan [-100;100]):\n";
	Xuat(A);
	delete[]A.a;
	MANG B;
	cout << "\n\nNhap mang B: ";
	Nhap(B);
	cout << "Mang B (gia tri trong doan [-100;100]):\n";
	Xuat(B);
	delete[]B.a;
	cout << endl;
	return 1;
}
void Nhap(MANG& x)
{
	cout << "\nNhap so phan tu mang: ";
	cin >> x.n;
	x.a = new int[x.n];
	srand(time(NULL));
	for (int i = 0; i < x.n; i++)
	{
		x.a[i] = rand() % 201 - 100;
	}
}
void Xuat(MANG y)
{
	for (int i = 0; i < y.n; i++)
	{
		cout << "a[" << i << "] = " << y.a[i] << setw(8);
	}
}