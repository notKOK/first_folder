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

struct Line
{
	short a;
	double b;
	bool c;
};

struct Line_align
{
	double b;
	short a;
	bool c;
};

void print(Alignment smth);
void print1(NoAlignment smth);
void print2(Line smth);
void print3(Line_align smth);
void size_line(Line smth);
void size_lineal(Line_align smth);
void size_alig(Alignment smth);
void size_noalig(NoAlignment smth);

int main()
{
	Alignment test;
	NoAlignment test1;
	Line test2;
	Line_align test3;

	cout << "Struct with default alignment: " << endl;
	cout << "Location: " << endl;
	print(test);
	size_alig(test);

	cout << "Struct with no alignment (one byte) " << endl;
	cout << "Location: " << endl;
	print1(test1);
	size_noalig(test1);

	cout << "Struct with random alignment BY MY HANDS): " << endl;
	cout << "Location:";
	print2(test2);
	size_line(test2);

	cout << "Struct with alignment by hands: " << endl;
	cout << "Location:";

	print3(test3);
	size_lineal(test3);

	return 0;
}

void print(Alignment smth)
{
	cout << &(smth.a) << endl;
	cout << &(smth.b) << endl;
	cout << &(smth.c) << endl;
	cout << endl;
}

void print1(NoAlignment smth)
{
	cout << &(smth.a) << endl;
	cout << &(smth.b) << endl;
	cout << &(smth.c) << endl;
	cout << endl;
}

void size_alig(Alignment smth)
{
	int size;
	size = sizeof(smth.a) + sizeof(smth.b) + sizeof(smth.c);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(smth) << endl;
	cout << endl;
}

void size_noalig(NoAlignment smth)
{
	int size;
	size = sizeof(smth.a) + sizeof(smth.b) + sizeof(smth.c);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(smth) << endl;
	cout << endl;
}

void print2(Line smth)
{
	cout << &(smth.a) << endl;
	cout << &(smth.b) << endl;
	cout << &(smth.c) << endl;
	cout << endl;
}

void print3(Line_align smth)
{
	cout << &(smth.a) << endl;
	cout << &(smth.b) << endl;
	cout << &(smth.c) << endl;
	cout << endl;
}

void size_line(Line smth)
{
	int size;
	size = sizeof(smth.a) + sizeof(smth.b) + sizeof(smth.c);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(smth) << endl;
	cout << endl;
}

void size_lineal(Line_align smth)
{
	int size;
	size = sizeof(smth.a) + sizeof(smth.b) + sizeof(smth.c);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(smth) << endl;
	cout << endl;
}
