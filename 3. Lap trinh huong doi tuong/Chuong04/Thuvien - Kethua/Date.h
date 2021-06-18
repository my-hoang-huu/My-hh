#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Date
{
private:
	int ngay;
	int thang;
	int nam;
public:
	Date() : ngay(0), thang(0), nam(0) {}
	Date(int a, int b, int c) : ngay(a), thang(b), nam(c) {}
	Date(const Date& d) { ngay = d.ngay; thang = d.thang; nam = d.nam; }
	Date operator= (const Date& d) { ngay = d.ngay; thang = d.thang; nam = d.nam; }
	~Date() { return; }
	void Nhap();
	void Xuat();
	bool KtNhuan();
	int NgayToiDaThang();
};