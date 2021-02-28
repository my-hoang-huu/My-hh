#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(float[], int&);
void Xuat(float[], int);
void LietKe(float[], int);
int main()
{
	float a[100];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	cout << "Cac cap gia tri thoa dieu kien trong mang: " << endl;
	LietKe(a, n);
	cout << endl;
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
void LietKe(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j && a[i] <= a[j])
			{
				cout << "(" << a[i] /*<< setw(4)*/ << ", " << a[j]/* << setw(4)*/ << "),  ";
			}
		}
	}
}
