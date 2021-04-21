#include<iostream>
#include<iomanip>
using namespace std;
struct DIEM
{
	float x;
	float y;
	float z;
};
void Nhap(DIEM&);
void Xuat(DIEM);
int main()
{
	DIEM A;
	cout << "Nhap toa do diem A: ";
	Nhap(A);
	cout << "\nToa do diem A";
	Xuat(A);
	return 1;
}
void Nhap(DIEM& P)
{
	cout << "\nx = ";
	cin >> P.x;
	cout << "y = ";
	cin >> P.y;
	cout << "z = ";
	cin >> P.z;
}
void Xuat(DIEM P)
{
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
	cout << "\nz = " << P.z;
}
