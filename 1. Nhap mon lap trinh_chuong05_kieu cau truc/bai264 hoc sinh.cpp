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
void Nhap(HOCSINH[], int&);
void Xuat(HOCSINH[], int);
int HocSinhGioi(HOCSINH[], int);
int main()
{
	cout << "a. Nhap mang cac thi sinh: ";
	int n;
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	HOCSINH* a = new HOCSINH[n];
	Nhap(a, n);
	cout << "\nb. Mang ban dau:";
	Xuat(a, n);
	cout << "\nc. So hoc sinh gioi trong mang: " << HocSinhGioi(a, n);
	cout << endl;
	return 1;
}
void Nhap(HOCSINH& a)
{
	cout << "Nhap Ho va ten hoc sinh: ";
	getline(cin, a.HoTen);
	a.Toan = rand() % 3 + 8;
	a.Van = rand() % 3 + 8;
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
void Nhap(HOCSINH a[], int& n)
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
void Xuat(HOCSINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
		cout << endl;
	}
}
void HoanVi(HOCSINH& a, HOCSINH& b)
{
	HOCSINH t = a;
	a = b;
	b = t;
}
int HocSinhGioi(HOCSINH a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i].Toan > 8 && a[i].Van > 8)
			dem++;
	}
	return dem;
}
