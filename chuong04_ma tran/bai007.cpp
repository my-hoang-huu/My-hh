#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;
void Nhap(int[][50], int& , int&, string );
void Xuat(int[][50], int, int, string);

int main()
{
	int a[20][50];
	int m, n;
	string filename = "data01.txt";
	Nhap(a, m, n, filename);
	cout << "Ma tran ban dau: ";
	Xuat(a, m, n, filename);
	return 1;
}
void Nhap(int a[][50], int& m, int & n, string filename)
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
void Xuat(int a[][50], int m, int n, string filename)
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
