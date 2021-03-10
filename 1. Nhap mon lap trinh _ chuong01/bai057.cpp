
#include <iostream>
#include<iomanip>
using namespace std;
int Dem59(int);

int main()
{
	int n;
	cout << "nhap n: ";
	cin >> n;
	int d59 = Dem59(n);
	cout << "So luong cac chu so cua " << n << " la: " << d59 << endl;
	
	system("pause");
	return 1;

}
int Dem59(int n)
{
	int t = n;
	int dem = 0;
	for (int t = 0; t != 0; t = t / 10)
	{
		dem++;
	}
	return dem;
}
