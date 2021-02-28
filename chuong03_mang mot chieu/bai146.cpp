#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);
void HoanVi(int&, int&);
void Saptang(int[], int);
void Xuly(int[], int, int[], int, int[], int&);

int main()
{
	int a[100];
	int n;
	cout << "Nhap mang a:";
	Nhap(a, n);
	Xuat(a, n);
	int b[100];
	int m;
	cout << "Nhap mang b:";
	Nhap(b, m);
	Xuat(b, m);
	int s[100];
	int k;
	Xuly(a, n, b, m, s, k);
	return 1;
}
void Nhap(int a[], int& n)
{
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		//cin >> a[i];
		a[i] = rand() % 201 - 100;
	}
}
void Xuat(int a[], int n)
{
	cout << "\nMang: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(10);
	}
	cout << endl;
}
void HoanVi(int& a, int& b)
{
	int lc;
	lc = a;
	a = b;
	b = lc;
}
void Saptang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
	Xuat(a, n);
}

void Xuly(int a[], int n, int b[], int m, int s[], int& k)
{
	cout << "\nMang a, b sau khi sap tang: \n";
	Saptang(a, n);
	Saptang(b, m);
	int i = 0;
	int j = 0;
	k = 0;
	while (i<n || j<m)
	{
		if (i<n && j<m && a[i] > b[j] || j >= m)
		{
			s[k++] = a[i++];
		}
		else
		{
			s[k++] = b[j++];
		}
	}
	cout << "\n\nMang p duoc tao tu mang a va b tang dan: " << endl;
	Xuat(s, k);
}