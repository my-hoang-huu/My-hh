#include<iostream>
#include<iomanip>
using namespace std;
struct DUONGTHANG
{
	float a;
	float b;
	float c;
};
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);
int main()
{
	DUONGTHANG b;
	cout << "Nhap toa do DUONGTHANG b: ";
	Nhap(b);
	cout << "\nToa do DUONGTHANG b";
	Xuat(b);
	return 1;
}
void Nhap(DUONGTHANG& a)
{
	cout << "\na = ";
	cin >> a.a;
	cout << "b = ";
	cin >> a.b;
	cout << "c = ";
	cin >> a.c;
}
void Xuat(DUONGTHANG a)
{
	cout << setw(6);
	cout << fixed << setprecision(2);
	cout << "\na = " << a.a;
	cout << "\nb = " << a.b;
	cout << "\nc = " << a.c;
}
