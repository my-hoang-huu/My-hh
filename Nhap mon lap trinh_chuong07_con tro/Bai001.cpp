#include<iostream>
using namespace std;
int main()
{
	int c;
	int* p;
	
	cout << "Dia chi cua c la: " << &c;
	p = &c;
	cout << "\nDia chi cua con tro p dang giu la: ";
	cout << p;
	c = 29;
	cout << "\nGia tri *p = " << *p;
	cout << "\nGia tri c = " << c;

	cout << endl;
	return 0;
}
