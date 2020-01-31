#include <iostream>

using namespace std;

int num_1 = 0;

int main()
{
	int num_2 = 0;
	int* dynamic = new int;

	cout << "Адрес глобальной переменной:  " << &num_1 << endl; 
	cout << "Адрес автоматической переменной:  " << &num_2 << endl; 
	cout << "Адрес динамической переменной:  " << dynamic << endl; 
}
