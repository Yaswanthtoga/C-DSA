#include<bits/stdc++.h>
using namespace std;

class Encapsulation {
public:
	string name;
	int age;
	string gender;


	Encapsulation(string name, int age, string gender) {
		this->name = name;
		this->age = age;
		this->gender = gender;
	}

	void getData() {
		cout << this->name << " " << this->age << " " << this->gender;
	}
};

int main()
{
	Encapsulation *obj = new Encapsulation("Yaswanth", 23, "male");
	obj->getData();
	return 0;
}