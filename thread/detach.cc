#include <iostream>
#include <thread>
#include <chrono>

void pause_thread(int n)
{
	std::this_thread::sleep_for(std::chrono::seconds(n));
	std::cout << "pause of" << n << " seconds ended\n";
}

int main(int argc, char ** argv)
{
	std::thread (pause_thread, 1).detach();
	std::cout << "Spawning and detaching 3 threads..\n";
	//std::thread (pause_thread, 3).detach();
	std::thread (pause_thread, 2).detach();
	std::thread (pause_thread, 3).detach();
	std::cout << "Done spawning threads. \n";

	std::cout << "(the main thread will now pause for 5 seconds)\n";
	pause_thread(11);
	return 0;
}
