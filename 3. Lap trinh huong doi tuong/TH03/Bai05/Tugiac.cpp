#include "Tugiac.h"



Tugiac::Tugiac() {
	Dinh = new Diem[4];

	for (int i = 0; i < 4; i++)
	{
		Dinh[i].SetX(i);
		Dinh[i].SetY(i + 1);
	}
}
Tugiac::~Tugiac() {
	delete[] Dinh;
	cout << "\nHAM HUY DUOC GOI THUC HIEN!";
}
Tugiac::Tugiac(const Tugiac& a) {

	Dinh = new Diem[4];
	for (int i = 0; i < 4; i++)
	{
		Dinh[i] = a.Dinh[i];
	}
}
Diem Tugiac::GetDinh(int n) {
	return Dinh[n];
}
float Tugiac::GetToaDoX(int n) {
	return Dinh[n].GetX();
}
float Tugiac::GetToaDoY(int n) {
	return Dinh[n].GetY();
}
void Tugiac::SetDinh(int n, float xx, float yy) {
	Dinh[n].SetXY(xx, yy);
}
void Tugiac::SetToaDoX(int n, float xx) {
	Dinh[n].SetX(xx);
}
void Tugiac::SetToaDoY(int n, float yy) {
	Dinh[n].SetY(yy);
}
void Tugiac::Nhap() {
	Dinh = new Diem[4];
	do
	{
		cout << "\nNhao theo thu tu cac dinh: ";
		for (int i = 0; i < 4; i++)
		{
			cout << "\nNhap dinh " << i + 1 << ": ";
			cin >> Dinh[i];
		}
		if (isThangHang() == 1)
		{
			cout << "\nHINH VUA NHAP CHUA BA DIEM THANG HANG HOAC TRUNG DINH, VUI LONG KIEM TRA VA NHAP LAI!";
		}
	} while (isThangHang() == 1);
}
void Tugiac::Xuat() {
	for (int i = 0; i < 4; i++)
	{
		cout << "\nDinh " << i + 1 << ": " << Dinh[i];
	}
}
bool Tugiac::isThangHang() {
	if (Dinh[0].isBaDiemThangHang(Dinh[1], Dinh[2]) || Dinh[1].isBaDiemThangHang(Dinh[2], Dinh[3])
		|| Dinh[2].isBaDiemThangHang(Dinh[3], Dinh[0]) || Dinh[3].isBaDiemThangHang(Dinh[0], Dinh[1]))
	{
		return true;
	}
	return false;

}