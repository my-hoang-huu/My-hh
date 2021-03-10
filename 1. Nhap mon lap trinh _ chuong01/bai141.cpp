#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int dt = abs(n);

	while (dt >= 10)
	{
		dt = dt / 10;
	}
		
	cout << "chu so dau tien cua so nguyen duong " << n << " la: " << dt << endl;
	system("pause");
	return 1;
}