#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct THISINH
{
	string HoTen;
	string MaSo;
	float Toan;
	float Ly;
	float Hoa;
	float Tong;
};
void Nhap(THISINH&);
void Xuat(THISINH);
int main()
{
	THISINH A;
	Nhap(A);
	Xuat(A);
	return 1;
}
void Nhap(THISINH& a)
{
	cout << "Nhap Ho va ten thi sinh: ";
	getline(cin, a.HoTen);
	cout << "Nhap Ma so thi sinh: ";
	getline(cin, a.MaSo);
	cout << "Nhap diem Toan: ";
	cin >> a.Toan;
	cout << "Nhap diem Ly: ";
	cin >> a.Ly;
	cout << "Nhap diem Hoa: ";
	cin >> a.Hoa;
	a.Tong = a.Toan + a.Ly + a.Hoa;
}
void Xuat(THISINH a)
{
	cout << "\nThong tin hoc sinh: ";
	cout << "\nHo ten: " << a.HoTen;
	cout << "\nMa so: " << a.MaSo;
	cout << "\nDiem Toan: " << a.Toan;
	cout << "\nDiem Ly: " << a.Ly;
	cout << "\nDiem Hoa: " << a.Hoa;
	cout << "\nTong diem: " << fixed << setprecision(2) << a.Tong << endl;
}
