#pragma once
#include"Person.h"
class PersonRh0 : public Person
{
public:
	void Nhap() {
		Person::Nhap();
		cout << "Loai Rh: Rh-\n";
		Rh = 0;
	}
};

