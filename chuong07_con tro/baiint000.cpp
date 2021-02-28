#include<iostream>
#include<iomanip>
using namespace std;
void Nhap(int[], int&);
void Xuat(int[], int);


int main()
{
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	srand(time(NULL));
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 21 - 10;
	}
	cout << "Mang ban dau (gia tri trong doan [-10;10]):\n";
	for (int i = 0; i < n; i++)
	{
		cout << setw(4) << a[i];
	}
	return 1;
}

