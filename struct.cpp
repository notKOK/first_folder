#include <iostream>

using namespace std;

struct Alignment //default alignment
{
	int a;

	short b;

	double c;
};

#pragma pack(push, 1)
struct NoAlignment // one byte alignment
{
	int a;

	short b;

	double c;
};
#pragma pack(pop)

void print(Alignment smth);

void print1(NoAlignment smth);

void size_alig(Alignment smth);

void size_noalig(NoAlignment smth);

int main()
{
	Alignment test;

	NoAlignment test1;

	cout << "Location with alignment: " << endl;

	print(test);

	cout << "Location without alignment: " << endl;

	print1(test1);

	size_alig(test);

	size_noalig(test1);

	return 0;

}

void print(Alignment smth)
{
	cout << &(smth.a) << endl;

	cout << &(smth.b) << endl;

	cout << &(smth.c) << endl;
}

void print1(NoAlignment smth)
{
	cout << &(smth.a) << endl;

	cout << &(smth.b) << endl;

	cout << &(smth.c) << endl;
}

void size_alig(Alignment smth)
{
	int size;

	size = sizeof(smth.a) + sizeof(smth.b) + sizeof(smth.c);

	cout << "Size of structure from sum of fields: " << size << endl;

	cout << "Size of structure from 'sizeof': " << sizeof(smth) << endl;
}

void size_noalig(NoAlignment smth)
{
	int size;

	size = sizeof(smth.a) + sizeof(smth.b) + sizeof(smth.c);

	cout << "Size of structure from sum of fields: " << size << endl;

	cout << "Size of structure from 'sizeof': " << sizeof(smth) << endl;
}
