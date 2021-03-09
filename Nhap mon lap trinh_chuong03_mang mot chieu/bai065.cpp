#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
int lietKe(float[], int);

int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo luong gia tri Phan biet trong mang ban dau: \n" << lietKe(a, n) << endl;
	return 1;
}
void Nhap(float a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
		a[i] = rand() * 1.0 / RAND_MAX * 200.0 - 100.0;
}
void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
int lietKe(float a[], int n)
{
	cout << "Cac gia tri phan biet co trong mang: \n";
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		int flag = 1;
		for (int j = 0; j < n; j++)
		{
			if (i != j && a[j] == a[i])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			cout << a[i] << setw(10);
			dem++;
		}
	}
	return dem;
}
