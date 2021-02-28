#include<iomanip>
#include <iostream>
using namespace std;
void LietKeUocSo(int);
int TongUocSo(int);
int TichUocSo(int);
int DemUocSo(int);
void LietKeUocLe(int);
int TichLeUoc(int);
int TongChanUoc(int);
void LietKeUocChan(int);
int TongUocSo2(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	LietKeUocSo(n);
	int s = TongUocSo(n);
	cout << "Bai 050: Tong cac uoc so cua so nguyen " << n << " la: " << s << endl;
	int t = TichUocSo(n);
	cout << "Bai 051: Tich cac uoc so cua so nguyen " << n << " la: " << t << endl;
	int dem = DemUocSo(n);
	cout << "Bai 052: So luong cac uoc so cua so nguyen " << n << " la: " << dem << endl;
	LietKeUocLe(n);
	int s54 = TongChanUoc(n);
	cout << "Bai 054: Tong cac uoc so chan cua so nguyen " << n << " la: " << s54 << endl;
	int t55 = TichLeUoc(n);
	cout << "Bai 055: Tich cac uoc so le cua so nguyen " << n << " la: " << t55 << endl;
	LietKeUocChan(n);
	int s56 = TongUocSo2(n);
	cout << "Bai 056: Tong cac uoc so cua so nguyen " << n << " nho hon chinh no la: " << s56 << endl;

	system("pause");
	return 1;
}
void LietKeUocSo(int k)
{
	cout << "Bai 049: Cac uoc so cua so nguyen " << k << " la: \n";
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
		{
			cout << i << setw(5);
		}
	}
	cout << "\n";
}
int TongUocSo(int k)
{
	int s = 0;
	for (int i = 1; i <= k; i++)
	{
		if (k % i == 0)
		{
			s = s + i;
		}
	}
	return s;
}
int TichUocSo(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			s = s * i;
		}
	}
	return s;
}
int DemUocSo(int n)
{
	int s = 1;
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}
	return dem;
}
void LietKeUocLe(int k)
{
	cout << "Bai 053: Cac uoc so le cua so nguyen " << k << " la: \n";
	for (int i = 1; i <= k; i = i + 2)
	{
		if (k % i == 0)
		{
			cout << i << setw(5);
		}
	}
	cout << "\n";
}
int TichLeUoc(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i = i + 2)
	{
		if (n % i == 0)
		{
			s = s * i;
		}
	}
	return s;
}
int TongChanUoc(int n)
{
	int s = 0;
	for (int i = 2; i <= n; i = i + 2)
	{
		if (n % i == 0)
		{
			s = s + i;
		}
	}
	return s;
}
void LietKeUocChan(int k)
{
	cout << "Bai 056: Cac uoc so chan cua so nguyen " << k << " la: \n";
	for (int i = 2; i <= k; i = i + 2)
	{
		if (k % i == 0)
		{
			cout << i << setw(5);
		}
	}
	cout << "\n";
}
int TongUocSo2(int k)
{
	int s = 0;
	for (int i = 1; i < k; i++)
	{
		if (k % i == 0)
		{
			s = s + i;
		}
	}
	return s;
}
