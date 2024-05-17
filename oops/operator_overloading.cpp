#include<bits/stdc++.h>
using namespace std;

class Sample {
public:
	int weight = 0;
	void operator ++() {
		++weight;
	}
};

int main() {
	Sample obj;
	++obj;

	cout << obj.weight;
	return 0;
}