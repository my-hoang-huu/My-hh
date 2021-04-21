#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct TINH
{
	int MaSo;
	string TenTinh;
	int DanSo;
	float DienTich;
};
void Nhap(TINH&);
void Xuat(TINH);
void Nhap(TINH[], int&);
void Xuat(TINH[], int);
void LietKe(TINH[], int);
void SapGiamDienTich(TINH[], int);

int main()
{
	cout << "Nhap mang cac tinh: ";
	int n;
	cout << "\nNhap so phan tu mang: ";
	cin >> n;
	TINH* a = new TINH[n];
	Nhap(a, n);
	cout << "\nMang ban dau:";
	Xuat(a, n);
	cout << "a. Cac tinh co dan so lon hon 1000000: ";
	LietKe(a, n);
	cout << "\nb. Mang sau khi sap giam dan dien tich cac tinh";
	SapGiamDienTich(a, n);
	Xuat(a, n);
	cout << endl;
	return 1;
}
void Nhap(TINH& a)
{
	cout << "\nNhap Ten tinh: ";
	getline(cin, a.TenTinh);
	a.MaSo = rand() % 20 + 1;
	a.DanSo = rand() * 1.0 /RAND_MAX * 2000000 + 100000;
	a.DienTich = rand() * 1.0 / RAND_MAX * 2000 + 100;
}
void Xuat(TINH a)
{
	//cout << "\n\nThong tin tinh: ";
	cout << setw(15) << "\nTen tinh: " << a.TenTinh;
	cout << setw(15) << "Ma so tinh: " << a.MaSo;
	cout << setw(15) << "Dan so: " << a.DanSo;
	cout << setw(15) << fixed << setprecision(2) << "Dien tich: " << a.DienTich;
}
void Nhap(TINH a[], int& n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		if (i == 0)
			cin.ignore();
		Nhap(a[i]);
	}
}
void Xuat(TINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
		cout << endl;
	}
}
void LietKe(TINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i].DanSo > 1000000)
			cout << a[i].TenTinh << setw(4);
	}
}
void HoanVi(float& a, float& b)
{
	float t = a;
	a = b;
	b = t;
}
void SapGiamDienTich(TINH a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i].DienTich < a[j].DienTich)
				HoanVi(a[i].DienTich , a[j].DienTich);
		}
	}
}
