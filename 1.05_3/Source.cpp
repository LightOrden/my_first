#include<iostream>

using namespace std;

union bytesumber {
	int uin;
	unsigned char bytes[4];
};

void input_number(bytesumber&);
void print_number(bytesumber);
void print_byte(bytesumber, int);
void print_bytes_binary(bytesumber);



int main() {
	bytesumber a;

	input_number(a);
	print_number(a);

	for (size_t i = 1; i < 5; i++)
	{
		print_byte(a, i);
	}
	print_bytes_binary(a);

	cout << endl;

	cout << "Num address " << int(&(a.uin)) << endl;
	cout << "First char addr " << int(&(a.bytes[0])) << endl;
	cout << "First char addr " << int(&(a.bytes[1])) << endl;
	cout << "First char addr " << int(&(a.bytes[2])) << endl;
	cout << "First char addr " << int(&(a.bytes[3])) << endl;

	cout << sizeof(a);



	return 0;
}

void input_number(bytesumber& bn)
{
	cout << "Enter integer" << endl;
	cin >> bn.uin;
}

void print_number(bytesumber bn)
{
	for (size_t i = 4; i > 0; i--)
	{
		cout << "byte" << 4 - i + 1 << ": " << (int)bn.bytes[i - 1] << endl;
	}
	cout << endl;
}

void print_byte(bytesumber bn, int i)
{
	cout << "byte" << i << ": " << (int)bn.bytes[4 - i] << endl;
}

void print_bytes_binary(bytesumber bn)
{
	for (size_t i = 4; i > 0; i--)
	{
		int byte1 = (int)bn.bytes[i - 1];
		cout << "byte " << 4 - i + 1 << ": ";
		int digits[8];
		int dig_id{ 7 };
		while (byte1 > 0) {
			digits[dig_id] = byte1 % 2;
		}
		for (int j = 0; j < 8; j++)
		{
			cout << digits[i];
		}
		cout << endl;
	}
	cout << endl;
}
