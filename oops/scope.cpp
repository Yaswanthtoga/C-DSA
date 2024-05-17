#include<bits/stdc++.h>
using namespace std;

class Mobile {
private:
	string name;
	int price;
	string model;

public:
	Mobile(string name = "NULL", int price = 0, string model = "NULL") {
		this->name = name;
		this->price = price;
		this->model = model;
	}

	Mobile(Mobile &cloned) {
		this->name = cloned.name;
		this->price = cloned.price;
		this->model = cloned.model;
	}

	void getMobileData();
};

void Mobile::getMobileData() {
	cout << name << " " << price << " " << model;
}

int main()
{
	Mobile doko;
	doko.getMobileData();
	// cout << doko;
	return 0;
}