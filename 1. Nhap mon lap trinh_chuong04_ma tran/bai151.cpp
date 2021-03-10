#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<ctime>
using namespace std;
void Nhap(float[][50], int&, int&);
void Xuat(float[][50], int, int);
float Min(float[][50], int, int);
void XuLy(float[][50], int, int);
int main()
{
	float a[20][50];
	int m;
	int n;
	Nhap(a, m, n);
	cout << "Ma tran ban dau: \n";
	Xuat(a, m, n);
	XuLy(a, m, n);
	return 1;
}
void Nhap(float a[][50], int& m, int& n)
{
	cout << "Nhap so dong m = ";
	cin >> m;
	cout << "\nNhap so cot n = ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() * 1.0 / RAND_MAX * 200 - 100;
			/*	cout << setw(7) << "a[" << i << "]" << "[" << j << "] = ";
				cin >> a[i][j];*/
		}
	}
	cout << endl;
}
void Xuat(float a[][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			cout << setw(8) << "a[" << i << "][" << j << "] = " << fixed << setprecision(2) << a[i][j];
		}
	}
	cout << endl;
}
float Min(float a[][50], int d, int n)
{
	float min = a[d][0];
	for (int j = 0; j < n; j++)
	{
		if (a[d][j] < min)
			min = a[d][j];
	}
	return min;
}
void XuLy(float a[][50], int m, int n)
{
	n++;
	for (int i = 0; i < m; i++)
	{
		a[i][n - 1] = Min(a, i, n - 1); //dung n-1 vi ma tran ban dau chi co n-1 cot
	}
	cout << "\nMa tran sau khi them cot cuoi voi moi phan tu la gia tri nho nhat tren dong tuong ung :";
	Xuat(a, m, n);
}