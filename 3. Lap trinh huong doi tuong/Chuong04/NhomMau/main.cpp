#include"Person.h"
#include"PersonRh1.h"
#include"Quanly.h"
int main() {

	//Person a;
	//a.Nhap();
	//cout << "\n---------------- KIEM TRA DI TRUYEN ----------------";
	//if (a.testDitruyen())
	//	cout << "\nPhu hop";
	//else
	//	cout << "\nKhong phu hop";
	Quanly q;
	cout << "\n---------------- NHAP MANG ----------------";
	q.Nhap();
	cout << "\n---------------- XUAT MANG ----------------";
	q.Xuat();
	cout << "\n---------------- KIEM TRA TRUYEN MAU ----------------";
	q.KtTruyenmau();


	return 1;
}