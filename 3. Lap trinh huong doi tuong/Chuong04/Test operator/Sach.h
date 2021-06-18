#pragma once
#include<iostream>
#include<string>
using namespace std;
class Sach
{
protected:
	int Soluong;
	string Ten;
public:
	Sach() {
		Soluong = 5;
		Ten = "\nSACH";
		cout << Ten;
	}
	~Sach() {
		cout << "\nHUY SACH";
	}
	void Nhap() {
		cin >> Soluong;
		cin.ignore();
		getline(cin, Ten);
	}
	void Xuat() {
		cout << "\nSo luong: " << Soluong << "\nTen sach: " << Ten;
	}
	Sach operator++() {//++a
		++Soluong;
		return *this;
	}
	Sach operator++(int) {//a++
		Sach b = *this;
		++Soluong;
		return b;
	}
	friend istream& operator>>(istream& is, Sach& a) {
		is >> a.Soluong;
		is.ignore();
		getline(is, a.Ten);
		return is;
	}
	friend ostream& operator<<(ostream& os, Sach a) {
		os << "\nSo luong: " << a.Soluong << "\nTen sach: " << a.Ten;
		return os;
	}
};

