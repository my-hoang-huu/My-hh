#include<iostream>
#include"Sach.h"
using namespace std;
int main() {
	//int* ptr = new int[1 + 2]; // dynamically allocate an integer
	//ptr[0] = 7; // put a value in that memory location
	//ptr[1] = 8;
	//cout << *ptr;
	//delete ptr; // return the memory to the operating system.  ptr is now a dangling pointer.

	//cout << *ptr; // Dereferencing a dangling pointer will cause undefined behavior
	//delete ptr; // trying to deallocate the memory again will also lead to undefined behavior.
	int a = 5;
	int b = 5;
	cout << a++;
	cout << a++;
	cout << ++b;
	cout << ++b;

	Sach a;
	Sach b;



	return 0;
}