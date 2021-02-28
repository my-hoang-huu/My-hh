#include<iostream>
#include <iomanip>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;
void Nhap(float [], int& , string);
void Xuat(float [], int );
int main()
{
	float b[100];
	int k;
	string filename = "float.txt";
	Nhap(b, k, filename);
	cout << "Mang ban dau: ";
	Xuat(b, k);

	return 0;
}

void Nhap(float a[], int& n, string filename)
{
	ifstream fi(filename);
	fi >> n;
	for (int i = 0; i < n; i++)
	{
		fi >> a[i];
	}
}

void Xuat(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << a[i];
	}
}