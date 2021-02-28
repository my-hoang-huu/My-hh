#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "\nNhap n: ";
	cin >> n;
	int* a;
	a = new int[n];
	cout << "\nDia chi a   " << &a;
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "] = ";
		cin >> a[i];
		cout << "\nDia chi a   " << &a;
		cout << "\nDia chi a[i]  " << &a[i];
		cout << "\nGia tri a " << *a;
	}
	cout << "\nDia chi a   " << &a;
	delete[]a;

	a = new int(6);
	cout << "\nGia tri cua a " << *a;
	int x = 3;
	int& y = x;
	x = 10;
	cout << "\nGia tri y  " << y;
	delete a;
	return 0;
}