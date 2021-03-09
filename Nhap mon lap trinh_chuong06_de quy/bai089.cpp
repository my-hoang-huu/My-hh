#include<iostream>
#include<iomanip>
using namespace std;
float Tich(int, float);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float kq = Tich(n, x);
	cout << "\nTich la: " << kq;
	return 1;
}
float Tich(int n, float x)
{
	if (n == 0)
		return 0;
	float T = 1;
	int M = 1;
	int dau = -1;
	return(Tich(n - 1, x) + pow(dau, n) * T * x / (M * n));
}