#include <iostream>
#include <thread>

void foo()
{
	std::cout << "this is function foo()\n" << std::endl;
}

void bar(int x)
{
	std::cout << "this is function bar(),para is " << x << std::endl;
}

int main(int argc, char ** argv)
{
	std::thread first(foo);
	std::thread second(bar, 0);

	std::cout << "main, foo and bar now execute concurrently...\n";

	first.join();
	second.join();

	std::cout << "foo and bar completed. \n";

	return 0;
}
