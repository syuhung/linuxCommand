#include <iostream>
#include <thread>

void fun(int x) 
{
	while( x-- > 0) {
		std::cout << x << std::endl;
	}
}

int main()
{
	std::thread first(fun, 100);
	first.join();
	return 0;
}
