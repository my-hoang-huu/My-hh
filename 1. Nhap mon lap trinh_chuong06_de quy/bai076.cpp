#include<iostream>
#include<iomanip>
using namespace std;
float Tich(int, float, float, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float T = x;
	int M = 1;
	float kq = Tich(n, x, T, M);
	cout << "\nTich la: " << kq;
	return 1;
}
float Tich(int n, float x, float T, int M)
{
	if (n == 0)
		return 1 + x;
	return(Tich(n - 1, x, T / ((2 * n) * (2 * n + 1)) + M / (T / M);
}