#include <iostream>
#include<iomanip>
using namespace std;
int Tong58(int);
int Dem59(int);
int Tich60(int);
int Dem61(int);
int Tong62(int);
int Tich63(int);
int LonNhat64(int);
int NhoNhat65(int);
void Chan66(int);
void Le67(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int t58 = Tong58(n);
	cout << "Bai 58: Tong cac chu so cua " << n << " la: " << t58 << endl;
	int d59 = Dem59(n);
	cout << "Bai 59: So luong cac chu so cua " << n << " la: " << d59 << endl;
	int t60 = Tich60(n);
	cout << "Bai 60: Tich cac chu so cua " << n << " la: " << t60 << endl;
	int d61 = Dem61(n);
	cout << "Bai 61: So luong cac chu so le cua " << n << " la: " << d61 << endl;
	int t62 = Tong62(n);
	cout << "Bai 62: Tong cac chu so chan cua " << n << " la: " << t62 << endl;
	int t63 = Tich63(n);
	cout << "Bai 63: Tich cac chu so le cua " << n << " la: " << t63 << endl;
	int t64 = LonNhat64(n);
	cout << "Bai 64: Chu so lon nhat cua " << n << " la: " << t64 << endl;
	int t65 = NhoNhat65(n);
	cout << "Bai 65: Chu so nho nhat cua " << n << " la: " << t65 << endl;
	Chan66(n);
	Le67(n);

	system("pause");
	return 1;

}
int Dem59(int n)
{
	int dem = 0;
	for (int t = n; t != 0; t = t / 10)
	{
		dem++;
	}
	return dem;
}
int Tich60(int n)
{
	int T = 1;
	for (int t = n; t != 0; t = t / 10)
	{
		int dv = t % 10;
		T = T * dv;
	}
	return T;
}
int Dem61(int n)
{
	int dem = 0;
	for (int t = n; t != 0; t = t / 10)
	{
		if (t % 2 == 1)
		{
			dem++;
		}
	}
	return dem;
}
int Tong62(int n)
{
	int T = 0;
	for (int t = n; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
		{
			T = T + dv;
		}
	}
	return T;
}
int Tich63(int n)
{
	int T = 1;
	for (int t = n; t != 0; t = t / 10)
	{
		if (t % 2 == 1)
		{
			int dv = t % 10;
			T = T * dv;
		}
	}
	return T;
}
int LonNhat64(int n)
{
	int lc = n % 10;
	for (int t = n; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv > lc)
		{
			lc = dv;
		}
	}
	return lc;
}
int NhoNhat65(int n)
{
	int lc = n % 10;
	for (int t = n; t != 0; t = t / 10)
	{
		int dv = t % 10;
		if (dv < lc)
		{
			lc = dv;
		}
	}
	return lc;
}
void Chan66(int n)
{
	int s = Dem59(n);
	int sl = Dem61(n);
	cout << "Bai 66: ";
	if (s == sl)
		cout << n << " khong chua chu so chan\n";
	else
		cout << n << " co chua chu so chan\n";
}
void Le67(int n)
{
	cout << "Bai 67: ";
	if (Dem61(n) == 0)
		cout << n << " khong chua chu so le\n";
	else
		cout << n << " co chua chu so le\n";
}
int Tong58(int n)
{
	int t = n;
	int s = 0;
	while (t != 0)
	{
		int dv = t % 10;
		s = s + dv;
		t = t / 10;
	}
	return s;
}


