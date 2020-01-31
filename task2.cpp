#include <iostream>

using namespace std;

size_t arr_size = 3;

void first_show_array(size_t ar_s, int arr[])
{
	for(size_t i = 0; i < ar_s; ++i)
		cout << &arr[i] << endl;
	cout << endl;
}

void first_show_darray(size_t ar_s, int *arr)
{
	for(size_t i = 0; i < ar_s; ++i)
		cout << &arr[i] << endl;
	cout << endl;
}

void second_show_darray(size_t ar_s1, size_t ar_s2, int** arr)
{
	for(size_t i = 0; i < ar_s1; ++i)
		for(size_t j = 0; j < ar_s2; ++j)
			cout << &arr[i][j] << endl;
	cout << endl;		
}

int main()
{
	int arr_1[arr_size];
	int arr_2[arr_size][arr_size];
	int* arr_d1 = new int[arr_size];
	int** arr_d2 = new int*[arr_size];
	for(size_t i = 0; i < arr_size; ++i)
		arr_d2[i] = new int[arr_size];
	cout << "Статический одномерный массив:  " << endl;
	first_show_array(arr_size, arr_1);
	cout << "Динамический одномерный массив:  " << endl;
	first_show_darray(arr_size, arr_d1);
	cout << "Cтатический двумерный массив:  " << endl;
	for(size_t i = 0; i < arr_size; ++i)
		for(size_t j = 0; j < arr_size; ++j)
			cout << &arr_2[i][j] << endl;
	cout << endl;
	cout << "Динaмический двyмepный массив:  " << endl;
	second_show_darray(arr_size, arr_size, arr_d2);
}



