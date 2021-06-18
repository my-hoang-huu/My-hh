#pragma once
#include"PersonRh0.h"
class PersonRh1 : public Person
{
public:
	void Nhap() {
		Person::Nhap();
		cout << "Loai Rh: Rh+\n";
		Rh = 1;
	}
};

