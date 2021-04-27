#pragma once
#include <iostream>
using namespace std;

class dathuc
{
private:
	int n; // so bac da thuc
	float* a;
public:
	dathuc() { a = nullptr; n = 0; }
	dathuc(int sb) { n = sb; a = new float[n + 1]; }
	dathuc(float *aa, int nn)
	{
		n = nn;
		a = new float[n + 1];
		for (int i = 0; i <= n; i++)
		{
			a[i] = aa[i];
		}
	}
	dathuc(const dathuc& copy) // dathuc a,b; a = b; hoac a(b);
	{
		n = copy.n;
		a = new float[n + 1];
		for (int i = 0; i < n + 1; i++)
		{
			a[i] = copy.a[i];
		}
	}
	void nhap();
	void xuat();
	int getterN();// Ham lay so bac da thuc n.
	float* getterArray();//Ham lay mang dong nhat, bien con tro duoc gan, dung chung vung nho voi a !!
	float* getterArray0();//Ham lay mang tach biet, bien con tro duoc gan, khac vung nho voi a !!
	float getterElement(int index);// Ham lay gia tri phan tu thu i (index) trong array a.

	void setterN(int value);// Ham dat lai so bac (n) cho da thuc.
	void setterElement(int index, float value);// Ham dat lai gia tri(value) tai phan tu thu i (index).
	dathuc tong(dathuc b);
	dathuc hieu(dathuc b);

	void release() { delete[]a; a = nullptr; }// Ham giai phong vung nho cho array a.
	~dathuc() { a = nullptr; n = 0; }
};

