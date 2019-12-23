#include <iostream>

using namespace std;

struct first_str1 
{
	int num;
	short num_1;
	double num_2;
};

struct second_str1 
{
	double num_2;
	short num_1;
	int num;
};

#pragma pack(push, 1)

struct first_str2 // Выравненное по 1 байту
{
	int num;
	short num_1;
	double num_2;
};

struct second_str2 
{
	double num_2;
	short num_1;
	int num;
};

#pragma pack(pop)

void print_ad1(first_str1 a)
{
	cout << &(a.num) << endl;
	cout <<	&(a.num_1) << endl;
	cout << &(a.num_2) << endl;
	cout << endl;
}

void print_ad2(first_str2 a)
{
	cout << &(a.num) << endl;
	cout <<	&(a.num_1) << endl;
	cout << &(a.num_2) << endl;
	cout << endl;
}

void print_ad3(second_str1 a)
{
	cout << &(a.num) << endl;
	cout <<	&(a.num_1) << endl;
	cout << &(a.num_2) << endl;
	cout << endl;
}

void print_ad4(second_str2 a)
{
	cout << &(a.num) << endl;
	cout <<	&(a.num_1) << endl;
	cout << &(a.num_2) << endl;
	cout << endl;
}

void get_size1(first_str1 a)
{
	int size;
	size = sizeof(a.num) + sizeof(a.num_1) + sizeof(a.num_2);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(a) << endl;
	cout << endl;
}

void get_size3(second_str1 a)
{
	int size;
	size = sizeof(a.num) + sizeof(a.num_1) + sizeof(a.num_2);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(a) << endl;
	cout << endl;
}

void get_size2(first_str2 a) 
{
	int size;
	size = sizeof(a.num) + sizeof(a.num_1) + sizeof(a.num_2);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(a) << endl;
	cout << endl;
}

void get_size4(second_str2 a)
{
	int size;
	size = sizeof(a.num) + sizeof(a.num_1) + sizeof(a.num_2);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(a) << endl;
	cout << endl;
}

int main()
{
	first_str1 test_1;	
	first_str2 test_2;
	second_str1 test_3;
	second_str2 test_4;
	cout << "Выравненный " << endl;
	print_ad1(test_1);
	get_size1(test_1);
	cout << "Не выравненный " << endl;
	print_ad2(test_2);
	get_size2(test_2);
	cout << "Выравненный " << endl;
	print_ad3(test_3);
	get_size3(test_3);
	cout << "Не выравненный " << endl;
	print_ad4(test_4);
	get_size4(test_4);
}

