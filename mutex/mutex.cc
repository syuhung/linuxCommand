#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

void print_block(int n, char c)
{
	mtx.lock();
	for(int i = 0; i < n; ++i) std::cout << c;
	std::cout << '\n';
	mtx.unlock();
}

int main()
{
	std::thread th1(print_block, 50, '*');
	std::thread th2(print_block, 50, '$');

	if( th1.joinable() )
		th1.join();
	if( th2.joinable() )
		th2.join();

	return 0;
}
