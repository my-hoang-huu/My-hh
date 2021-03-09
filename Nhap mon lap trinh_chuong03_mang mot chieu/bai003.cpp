#include<iostream>
#include <iomanip>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;
void Nhap(int [], int& , string);
void Xuat(int [], int );
int main()
{
	int b[100];
	int k;
	string filename = "1Dint.txt";
	Nhap(b, k, filename);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	return 0;
}

void Nhap(int a[], int& n, string filename)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i < n; i++)
	{
		fi >> a[i];
	}
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << a[i];
	}
}