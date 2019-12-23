#include <iostream>

using namespace std;

struct Alignment //default alignment
{
	int wheels;
	short for_age;
	double wheel_size;
};

#pragma pack(push, 1)
struct NoAlignment // one byte alignment
{
	int wheels;
	short for_age;
	double wheel_size;
};
#pragma pack(pop)

struct Line
{
	short cost;
	double calories;
	bool exist;
};

struct Line_align
{
	double calories;
	short cost;
	bool exist;
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
	Alignment bicycle;
	NoAlignment bicycle2;
	Line ice_cream;
	Line_align ice_cream2;

	cout << "Struct with default alignment: " << endl;
	cout << "Location: " << endl;
	print(bicycle);
	size_alig(bicycle);

	cout << "Struct with no alignment (one byte) " << endl;
	cout << "Location: " << endl;
	print1(bicycle2);
	size_noalig(bicycle2);

	cout << "Struct with random alignment BY MY HANDS): " << endl;
	cout << "Location:" << endl;
	print2(ice_cream);
	size_line(ice_cream);

	cout << "Struct with alignment by hands: " << endl;
	cout << "Location:" << endl;

	print3(ice_cream2);
	size_lineal(ice_cream2);

	return 0;
}

void print(Alignment smth)
{
	cout << &(smth.wheels) << endl;
	cout << &(smth.for_age) << endl;
	cout << &(smth.wheel_size) << endl;
	cout << endl;
}

void print1(NoAlignment smth)
{
	cout << &(smth.wheels) << endl;
	cout << &(smth.for_age) << endl;
	cout << &(smth.wheel_size) << endl;
	cout << endl;
}

void size_alig(Alignment smth)
{
	int size;
	size = sizeof(smth.wheels) + sizeof(smth.for_age) + sizeof(smth.wheel_size);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(smth) << endl;
	cout << endl;
}

void size_noalig(NoAlignment smth)
{
	int size;
	size = sizeof(smth.wheels) + sizeof(smth.wheel_size) + sizeof(smth.for_age);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(smth) << endl;
	cout << endl;
}

void print2(Line smth)
{
	cout << &(smth.cost) << endl;
	cout << &(smth.calories) << endl;
	cout << &(smth.exist) << endl;
	cout << endl;
}

void print3(Line_align smth)
{
	cout << &(smth.cost) << endl;
	cout << &(smth.calories) << endl;
	cout << &(smth.exist) << endl;
	cout << endl;
}

void size_line(Line smth)
{
	int size;
	size = sizeof(smth.cost) + sizeof(smth.calories) + sizeof(smth.exist);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(smth) << endl;
	cout << endl;
}

void size_lineal(Line_align smth)
{
	int size;
	size = sizeof(smth.cost) + sizeof(smth.calories) + sizeof(smth.exist);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(smth) << endl;
	cout << endl;
}
