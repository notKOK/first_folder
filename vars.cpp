#include <iostream>

using namespace std;

int global = 0;

int main()
{
	int local = 0;
	int* dynamic = new int;

	cout << "Адрес глобальной: " << &global << endl;
	cout << "Адрес локальной: " << &local << endl;
	cout << "Адрес динамической: " << dynamic << endl;
	return 0;
}
