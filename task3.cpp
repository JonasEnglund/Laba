#include <iostream>
using namespace std;
struct first_car_1 //Обычное выравнивание
{
	int speed;
	short distance;
	double time;
};

#pragma pack(push, 1)
struct first_car_2 // Выравненное по 1 байту
{
	int speed;
	short distance;
	double time;
};
#pragma pack(pop)

struct second_car_1
{
	double time
	bool exist;
	short distance;
};

struct second_car_2 
{
	bool exist;
	short distance;
	double time;
};
void print_ad1(first_car_1 a)
{
	cout << &(a.speed) << endl;
	cout << &(a.time) << endl;
	cout << &(a.distance) << endl;
	cout << endl;
}
void print_ad2(first_car_2 a)
{
	cout << &(a.speed) << endl;
	cout << &(a.time) << endl;
	cout << &(a.distance) << endl;
	cout << endl;
}
void print_ad3(second_car_1 a)
{
	cout << &(a.exist) << endl;
	cout << &(a.time) << endl;
	cout << &(a.distance) << endl;
	cout << endl;
}
void print_ad4(second_car_2 a)
{
	cout << &(a.exist) << endl;
	cout << &(a.time) << endl;
	cout << &(a.distance) << endl;
	cout << endl;
}
void get_size1(first_car_1 a)
{
	int size;
	size = sizeof(a.speed) + sizeof(a.time) + sizeof(a.distance);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(a) << endl;
	cout << endl;
}
void get_size3(second_car_1 a)
{
	int size;
	size = sizeof(a.exist) + sizeof(a.time) + sizeof(a.distance);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(a) << endl;
	cout << endl;
}
void get_size2(first_car_2 a) 
{
	int size;
	size = sizeof(a.speed) + sizeof(a.time) + sizeof(a.distance);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(a) << endl;
	cout << endl;
}
void get_size4(second_car_2 a)
{
	int size;
	size = sizeof(a.exist) + sizeof(a.time) + sizeof(a.distance);
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
	cout << "Автоматическое выравнивание " << endl;
	print_ad1(test_1);
	get_size1(test_1);
	cout << "Выравненный по 1 байту " << endl;
	print_ad2(test_2);
	get_size2(test_2);
	cout << "Не выравненный " << endl;
	print_ad3(test_3);
	get_size3(test_3);
	cout << "Выравненный вручную " << endl;
	print_ad4(test_4);
	get_size4(test_4);
}
