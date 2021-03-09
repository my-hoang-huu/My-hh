#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int* p = &a;
	cout << "Dia chi cua a la: " << &a;
	cout << "\nDia chi cua p dang giu la: ";
	cout << p;
	a++;
	cout << "\nGia tri a: " << a;
	cout << "\nGia tri tai dia chi con tro p dang giu: " << *p;
	*p = 15;
	cout << "\n\nSau khi gan *p = 15: ";
	cout << "\nGia tri a: " << a;
	cout << "\nGia tri tai dia chi con tro p dang giu: " << *p;
	*p = 90;
	cout << "\n\nSau khi gan *p = 90: ";
	cout << "\nGia tri tai dia chi con tro p dang giu: " << *p;

	cout << endl;
	return 0;
}
