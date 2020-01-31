#include <iostream>
using namespace std;
struct first_car_1
{
	bool exist1;
	int speed;
	bool exist2;
	double time;
};

#pragma pack(push, 1)
struct first_car_2 
{
	bool exist3;
	int speed;
	bool exist4;
	double time;
};
#pragma pack(pop)

struct second_car_1
{
	double time;
	int speed;
	bool exist5;
	bool exist6;
};

void print_ad1(first_car_1 a)
{
	cout << "Location of fields" << endl;
	cout << "Exist1(bool):" << &(a.exist1) << endl;
	cout << "Speed(int):" << &(a.speed) << endl;
	cout << "Exist2(bool):" << &(a.exist2) << endl;
	cout << "Time(double):" << &(a.time) << endl;
	cout << endl;
}
void print_ad2(first_car_2 a)
{
	cout << "Location of fields" << endl;
	cout << "Exist3(bool):" << &(a.exist3) << endl;
	cout << "Speed(int):" << &(a.speed) << endl;
	cout << "Exist4(bool):" << &(a.exist4) << endl;
	cout << "Time(double):" << &(a.time) << endl;
	cout << endl;
}
void print_ad3(second_car_1 a)
{
	cout << "Location of fields" << endl;
	cout << "Time(double):" << &(a.time) << endl;
	cout << "Speed(int):" << &(a.speed) << endl;
	cout << "Exist5(bool):" << &(a.exist3) << endl;
	cout << "Exist6(bool):" << &(a.exist4) << endl;
	cout << endl;
}
void get_size1(first_car_1 a)
{
	int size;
	size = sizeof(a.exist1) + sizeof(a.speed) + sizeof(a.time) + sizeof(a.exist2);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(a) << endl;
	cout << endl;
}
void get_size2(first_car_2 a) 
{
	int size;
	size = sizeof(a.speed) + sizeof(a.time) + sizeof(a.exist3) + sizeof(a.exist4);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(a) << endl;
	cout << endl;
}
void get_size3(second_car_1 a)
{
	int size;
	size = sizeof(a.exist5) + sizeof(a.speed) + sizeof(a.time) + sizeof(a.exist6);
	cout << "Size of structure from sum of fields: " << size << endl;
	cout << "Size of structure from 'sizeof': " << sizeof(a) << endl;
	cout << endl;
}

int main()
{
	first_car_1 test_1;	
	first_car_2 test_2;
	second_car_1 test_3;
	cout << " Struct with alignment with default fields " << endl;
	print_ad1(test_1);
	get_size1(test_1);
	cout << " Struct with no alignment " << endl;
	print_ad2(test_2);
	get_size2(test_2);
	cout << " Struct with alignment with sorted fields " << endl;
	print_ad3(test_3);
	get_size3(test_3);
}
