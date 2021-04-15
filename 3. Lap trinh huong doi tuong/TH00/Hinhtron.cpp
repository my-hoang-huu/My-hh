#include "Hinhtron.h"



void Hinhtron::Nhap()
{
	cout << "\nnhap tam: ";
	i.Nhap();
	cout << "ban kinh: ";
	cin >> r;
}
void Hinhtron:: Xuat()
{
	cout << "tam: ";
	i.Xuat();
	cout << "ban kinh: " <<r;
}
float Hinhtron::Chuvi()
{
	float c = 2 * 3.14*r;
	return c;
}
