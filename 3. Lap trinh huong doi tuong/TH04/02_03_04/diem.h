#pragma once
#include <iostream>
using namespace std;

class diem
{
private:
	float x, y;
public:
	diem() : x(), y() {}
	diem(float xx, float yy) : x(xx), y(yy) {}
	void nhap()
	{
		cout << "   + Toa do x: "; cin >> x;
		cout << "   + Toa do y: "; cin >> y;
	}

	void xuat()
	{
		cout << "(" << x << ", " << y << ")";
	}

	friend istream& operator >> (istream& in, diem& x)
	{
		cout << "   + Toa do x: "; in >> x.x;
		cout << "   + Toa do y: "; in >> x.y;
		return in;
	}

	friend ostream& operator << (ostream& out, diem x)
	{
		out << "(" << x.x << ", " << x.y << ")";
		return out;
	}
	diem operator+(diem b)
	{
		diem c;
		c.x = x + b.x;
		c.y = y + b.y;
		return c;
	}
	diem operator/(int so)
	{
		diem kq;
		kq.x = x / so;
		kq.y = y / so;
		return kq;
	}
	bool operator==(diem b)
	{
		if (x == b.x && y == b.y)
			return true;
		return false;
	}

	float khoangcach(diem b) { return sqrt(pow(b.x - x, 2) - pow(b.y - y, 2)); }

	void tinhtien(float xx, float yy)
	{
		x += xx;
		y += yy;
	}
};

