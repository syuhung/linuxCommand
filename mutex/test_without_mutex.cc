#include<iostream>
#include<thread>
#include<chrono>

void foo()
{
	for (int i = 0; i < 99; ++i)
		std::cout << "线程" << std::this_thread::get_id() << ": The thread1 is running!" << std::endl;
}

void bar()
{
	for (int i = 0; i < 99; ++i)
		std::cout << "线程" << std::this_thread::get_id() << ": The thread2 is running!" << std::endl;
}

int main()
{
	std::thread t1(foo);
	std::thread t2(bar);

	if (t1.joinable())
		t1.detach();
	if (t2.joinable())
		t2.detach();

	std::this_thread::sleep_for(std::chrono::seconds(1));
	getchar();
	return 0;
}
