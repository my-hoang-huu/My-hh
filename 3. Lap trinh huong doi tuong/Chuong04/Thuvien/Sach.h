#include<iostream>
#include<string>
using namespace std;

#pragma once
class Sach
{
private:
	int Soluong;
	string Ten;
	string TenTacGia;
	string NhaXuatBan;
	int NamXuatBan;
public:
	Sach() :Soluong(0), Ten(""), TenTacGia(""), NamXuatBan(1) {}
	~Sach() { return; }
	int GetSoluong() { return Soluong; }
	string GetTen() { return Ten; }
	void SetTen() {
		cin.ignore();
		getline(cin, Ten);
	}
	friend istream& operator >>(istream&, Sach&);
	friend ostream& operator <<(ostream&, const Sach&);
};

