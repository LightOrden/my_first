#include<iostream>

using namespace std;

union mm{
	unsigned short int comp1;
	int comp2;
	long long c;
} u, b;

struct my{
	unsigned short int comp1;
	int comp2;
	long long c;
} st;


void main() {
	u.comp1 = 66000;

	cout << u.comp1 << endl;
	cout << u.comp2 << endl;
	cout << u.c << endl << endl;

	st.comp1 = 66000;

	cout << st.comp1 << endl;
	cout << st.comp2 << endl;
	cout << st.c << endl;

	cout << "union size " << sizeof(u) << endl;

	cout << "struct size " << sizeof(st);
}