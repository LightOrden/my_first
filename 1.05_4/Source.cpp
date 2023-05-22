#include <iostream>

using namespace std;

struct two {
	unsigned short a : 4;
	unsigned short b : 4;
};

void main() {
	two s{15, 17};

	cout << sizeof(s);


}
