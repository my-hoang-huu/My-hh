#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int dv = n / 100 % 10;
	cout << "chu so hang tram cua " << n << " la: " << dv << endl;

	system("pause");
	return 1;

}