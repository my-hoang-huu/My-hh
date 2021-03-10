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
void Nhap(THISINH[], int&);
void Xuat(THISINH[], int);
void SapGiamDiemTong(THISINH[], int);
void ThiSinhDau(THISINH[], int);
int main()
{
	cout << "a. Nhap mang cac thi sinh: ";
	int n;
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	THISINH* a = new THISINH[n];
	Nhap(a, n);
	cout << "\nb. Mang ban dau:";
	Xuat(a, n);
	cout << "c. Cac thi sinh dau:	";
	ThiSinhDau(a, n);
	cout << "\n\nd. Mang sau khi sap giam dan diem tong cac thi sinh: ";
	SapGiamDiemTong(a, n);
	Xuat(a, n);
	cout << endl;
	return 1;
}
void Nhap(THISINH& a)
{
	cout << "Nhap Ho va ten thi sinh: ";
	getline(cin, a.HoTen);
	cout << "Nhap Ma so thi sinh: ";
	getline(cin, a.MaSo);
	a.Toan = rand() % 11;
	a.Ly = rand() % 11;
	a.Hoa = rand() % 11;
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
void Nhap(THISINH a[], int& n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			cin.ignore();
		Nhap(a[i]);
		cout << endl;
	}
}
void Xuat(THISINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
		cout << endl;
	}
}
void HoanVi(THISINH& a, THISINH& b)
{
	THISINH t = a;
	a = b;
	b = t;
}
void SapGiamDiemTong(THISINH a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].Tong < a[j].Tong)
				HoanVi(a[i], a[j]);
		}
	}
}
void ThiSinhDau(THISINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].Tong > 15 && a[i].Toan != 0 && a[i].Ly != 0 && a[i].Hoa != 0)
			cout << a[i].HoTen << setw(3);
	}
}
