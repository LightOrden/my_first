#include <iostream>

using namespace std;

union binumer {
	unsigned int a;
	int b;
};

void main() {
	binumer x;
	/*cout << "Enter integer" << endl;
	cin >> x.b;

	cout << "You usigned integer: " << x.a << endl;*/

	cout << "      signed       usigned" << endl;

	for (int i = 10; i > -11; i--) {
		x.b = i;

		printf("%12d  %12u\n", x.b, x.a);
	}


}
