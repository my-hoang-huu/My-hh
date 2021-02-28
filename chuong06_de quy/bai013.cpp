#include<iostream>
#include<iomanip>
using namespace std;
float Tich(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float kq = Tich(n);
	cout << "\nTich la: " << kq;
	return 1;
}
float Tich(int n)
{
	if (n == 1)
		return 2;
	return(Tich(n - 1) * (1 + 1.0 / (n * n)));
}