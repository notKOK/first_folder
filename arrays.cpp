#include <iostream>

using namespace std;

void array_print1_st(size_t size, int arr[]);

//void array_print2_st(size_t size, size_t size1, int arr[size][size1]); //Я не знаю,это не хочет работать...

void array_print1_dy(size_t size, int* arr);

void array_print2_dy(size_t size, size_t size1, int** arr);

size_t arr_sz = 3;

int main()
{
	int arr_static_1dim[arr_sz];

	int arr_static_2dim[arr_sz][arr_sz];

	int* arr_dynamic_1dim = new int[arr_sz];

	int** arr_dynamic_2dim = new int*[arr_sz];

	for(int i = 0; i < arr_sz; i++)
	{
		arr_dynamic_2dim[i] = new int[arr_sz];
	}

	cout << "Static 1 dim: " << endl;
	array_print1_st(arr_sz, arr_static_1dim);

	cout << "Dynamic 1 dim: " << endl;
	array_print1_dy(arr_sz, arr_dynamic_1dim);

	cout << "Static 2 dim: " << endl; //реализация здесь, потому что не работает функция
	for(int i = 0; i < arr_sz; i++)
		{
			for(int j = 0; j < arr_sz; j++)
			{
				cout << &arr_static_2dim[i][j] << endl;
			}
		}

	cout << endl;

	cout << "Dynamic 2 dim: " << endl;
	array_print2_dy(arr_sz, arr_sz, arr_dynamic_2dim);

	delete [] arr_dynamic_1dim;

	 for(int i = 0; i < arr_sz; i++)
	    {
	        delete [] arr_dynamic_2dim[i];
	    }

	 delete [] arr_dynamic_2dim;

	return 0;
}

void array_print1_st(size_t size, int arr[])
{
	for(int i = 0; i < size; i++)
	{
		cout << &arr[i] << endl;
	}

	cout << endl;
}

void array_print1_dy(size_t size, int* arr)
{
	for(int i = 0; i < size; i++)
	{
		cout << &arr[i] << endl;
	}

	cout << endl;
}

void array_print2_dy(size_t size, size_t size1, int** arr)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size1; j++)
		{
			cout << &arr[i][j] << endl;
		}
	}

	cout << endl;
}
/*
void array_print2_st(size_t size, size_t size1, int arr[size][size1])
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size1; j++)
		{
			cout << &arr[i][j] << endl;
		}
	}

	cout << endl;
}
*/
