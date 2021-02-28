#include<iostream>
using namespace std;
int main()
{
	float x;
	double s;
	cout << "nhap x: ";
	cin >> x;
	if (x>=5)
	{
		s = 2 * x * x + 5 * x + 9;
	}
	else
	{
		s = -2 * x * x + 4 * x - 9;
	}
	cout << "Gia tri ham so la: " << s << endl;

	system("pause");
	return 1;
}
