#include "dathuc.h"

void dathuc::nhap()
{
	if (a == nullptr)
	{
		cout << "Nhap so bac da thuc: "; cin >> n;
		a = new float[n + 1];
	}
	for (int i = n; i >= 0; i--)
	{
		cout << "  + a" << i << ": ";
		cin >> a[i];
	}
}

void dathuc::xuat()
{
	for (int i = n; i >= 0; i--)
	{
		cout << a[i];
		if (i > 0)
		{
			cout << "x";
			if (i > 1)
				cout << "^" << i;
			if (a[i - 1] >= 0)
				cout << " + ";
			else
				cout << " ";
		}
	}
}

int dathuc::getterN() { return n; }

float* dathuc::getterArray() { return a; }// Bien con tro duoc gan, se quan ly chung vung nho voi a (chep dia chi vung nho dong) (chung vung nho dong)

float* dathuc::getterArray0()// Bien con tro dc gan, chi sao chep gia tri cua a (chep gia tri) (khac vung nho dong)
{
	float* temp;// tao con tro temp
	temp = new float[n + 1];//dung temp de xin cap phat "vung nho dong"
	for (int i = n; i >= 0; i--)
	{
		temp[i] = a[i];// gan gia tri cho vung nho dong
	}
	return temp;// tra ve dia chi cua vung nho dong
}
//Luu y: vung nho dong duoc cap phat se ko bi thu hoi khi ra khoi ham
//chi co dia chi cua bien temp la bi thu hoi thoi !!
//Ket luan: 1. "Vung nho duoc cap phat tinh" se "bi" thu hoi boi he dieu hanh khi ra khoi ham.
//          2. "Vung nho duoc cap phat dong" se "Ko bi" thu hoi boi he dieu hanh khi ra khoi ham.
//Vi vay de tranh truong hop bi ro ri bo nho, ta phai dung toan tu delete de tra lai vung nho do cho hdh khi dung xong.

float dathuc::getterElement(int index)
{
	return a[index];
}

void dathuc::setterElement(int index, float value)
{
	a[index] = value;
}

void dathuc::setterN(int x) {n = x;}

//cach 1:
//dathuc dathuc::tong(dathuc b)
//{
//	int bign = n > b.n ? n : b.n;
//	int smalln = n < b.n ? n : b.n;
//	dathuc kq;
//	kq.a = new float[bign + 1];
//	kq.n = bign;
//
//	for (int i = 0; i <= bign; i++)
//	{
//		if (i <= smalln)
//			kq.a[i] = a[i] + b.a[i];
//		else
//		{
//			if (n == bign)
//				kq.a[i] = a[i];
//			else
//				kq.a[i] = b.a[i];
//		}
//	}
//	return kq;
//}

//cach 2
dathuc dathuc::tong(dathuc b)
{
	int bign = n > b.n ? n : b.n;
	int smalln = n < b.n ? n : b.n;
	float *aa = new float [bign + 1];
	int nn = bign;

	for (int i = 0; i <= bign; i++)
	{
		if (i <= smalln)
			aa[i] = a[i] + b.a[i];
		else
		{
			if (n == bign)
				aa[i] = a[i];
			else
				aa[i] = b.a[i];
		}
	}
	return dathuc(aa, nn);
}

//cach 1
//dathuc dathuc::hieu(dathuc b)
//{
//	for (int i = 0; i <= b.n; i++)
//		b.a[i] = b.a[i] * (-1);
//
//	int bign = n > b.n ? n : b.n;
//	int smalln = n < b.n ? n : b.n;
//	dathuc kq;
//	kq.a = new float[bign + 1];
//	kq.n = bign;
//
//	for (int i = 0; i <= bign; i++)
//	{
//		if (i <= smalln)
//			kq.a[i] = a[i] + b.a[i];
//		else
//		{
//			if (n == bign)
//				kq.a[i] = a[i];
//			else
//				kq.a[i] = b.a[i];
//		}
//	}
//	return kq;
//}

//cach 2
dathuc dathuc::hieu(dathuc b)
{
	for (int i = 0; i <= b.n; i++)
		b.a[i] = b.a[i] * (-1);

	int bign = n > b.n ? n : b.n;
	int smalln = n < b.n ? n : b.n;
	
	float *aa = new float[bign + 1];
	int nn = bign;

	for (int i = 0; i <= bign; i++)
	{
		if (i <= smalln)
			aa[i] = a[i] + b.a[i];
		else
		{
			if (n == bign)
				aa[i] = a[i];
			else
				aa[i] = b.a[i];
		}
	}
	return dathuc(aa, nn);
}