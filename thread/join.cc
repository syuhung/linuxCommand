#include <thread>
#include <iostream>
#include <chrono>

void run(int count)
{
	while(count-- > 0) {
		std::cout << count << std::endl;
	}
}

int main(int argc, char ** argv)
{
	std::thread t1(run, 10);
	std::cout << "main()" << std::endl;
	t1.join();
	/*if(t1.joinable()) {
		t1.join();
	}*/
	t1.join();
	std::cout << "main() after" << std::endl;
	return 0;
}
