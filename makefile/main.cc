#include <iostream>
#include <sub.h>
#include <add.h>
int main(int argc, char *argv[])
{
	int a = 10, b = 12;
	float x = 1.23456, y = 9.87654321;

	std::cout << "int a+b is:" << add_int(a,b) << std::endl;
	std::cout << "int a-b is:" << sub_int(a,b) << std::endl;
	std::cout << "float x+y is:" << add_float(x,y) << std::endl;
	std::cout << "float x-y is:" << sub_float(x,y) << std::endl;
	return 0;
}
