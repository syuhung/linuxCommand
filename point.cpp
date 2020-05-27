#include <iostream>

void fun(int *a, int *b){
	std::cout << "*a: " << *a << std::endl;
	std::cout << "*b: " << *b << std::endl;
	std::cout << "&a: " << &a << std::endl;
	std::cout << "&b: " << &b << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
}

int main(int argc, char *argv[]){
	int first = 1,second = 2;
	fun(&first, &second);
	return 0;
}

