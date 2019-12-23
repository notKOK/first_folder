#include <iostream>

using namespace std;

int global = 0;

int main()
{
	int local = 0;
	int* dynamic = new int;

	cout << "Global address: " << &global << endl;
	cout << "Local address: " << &local << endl;
	cout << "Dynamic address: " << dynamic << endl;
	return 0;
}
