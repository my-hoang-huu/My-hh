#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct HOCSINH
{
	string HoTen;
	int Toan;
	int Van;
	float TrungBinh;
};
void Nhap(HOCSINH&);
void Xuat(HOCSINH);
int main()
{
	HOCSINH A;
	Nhap(A);
	Xuat(A);
	return 1;
}
void Nhap(HOCSINH& a)
{
	cout << "Nhap Ho va ten hoc sinh: ";
	getline(cin, a.HoTen);
	cout << "Nhap diem Toan: ";
	cin >> a.Toan;
	cout << "Nhap diem Van: ";
	cin >> a.Van;
	a.TrungBinh = (a.Toan + a.Van) * 1.0 / 2;
}
void Xuat(HOCSINH a)
{
	cout << "\nThong tin hoc sinh: ";
	cout << "\nHo ten: " << a.HoTen;
	cout << "\nDiem Toan: " << a.Toan;
	cout << "\nDiem Van: " << a.Van;
	cout << "\nDiem trung binh: " << fixed << setprecision(2) << a.TrungBinh << endl;
}
