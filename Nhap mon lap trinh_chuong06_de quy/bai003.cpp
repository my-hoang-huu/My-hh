#include<iostream>
#include<iomanip>
using namespace std;
int GiaiThua(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq = GiaiThua(n);
	cout << "\nKet qua: " << kq;
	return 1;
}
int GiaiThua(int n)
{
	if (n == 0)
		return 1;
	return(GiaiThua(n - 1) * n);
}