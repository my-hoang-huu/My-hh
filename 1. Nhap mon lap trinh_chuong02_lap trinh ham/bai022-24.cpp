#include<iostream>
using namespace std;
int DonVi(int);
int Chuc(int);
int Tram(int);
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int dv = DonVi(n);
	cout << "Bai 022: Chu so hang don vi cua " << n << " la: " << dv << endl;
	int c = Chuc(n);
	cout << "Bai 023: Chu so hang chuc cua " << n << " la: " << c << endl;
	int t = Tram(n);
	cout << "Bai 024: Chu so hang tram cua " << n << " la: " << t << endl;
	system("pause");
	return 1;

}
int DonVi(int n)
{
	int dv = n % 10;
	return dv;
}
int Chuc(int n)
{
	int dv = (n / 10) % 10;
	return dv;
}
int Tram(int n)
{
	int dv = n / 100 % 10;
	return dv;
}
