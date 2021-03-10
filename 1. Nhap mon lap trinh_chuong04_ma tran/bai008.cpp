#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include<string>
#include<fstream>
using namespace std;
void Nhap(float[][50], int&, int&, string);
void Xuat(float[][50], int, int, string);

int main()
{
	float a[20][50];
	int m, n;
	string filename = "data06.txt";
	Nhap(a, m, n, filename);
	cout << "Ma tran ban dau: ";
	Xuat(a, m, n, filename);
	return 1;
}
void Nhap(float a[][50], int& m, int& n, string filename)
{
	ifstream fi(filename);
	fi >> m;
	fi >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			fi >> a[i][j];
			
		}
	}
}
void Xuat(float a[][50], int m, int n, string filename)
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
