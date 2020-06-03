#include <iostream>
using namespace std;

size_t count_calls()
{
	static size_t ctr;
	return ++ctr;
}

int main(int argc, char *argv[])
{
	for (size_t i = 0; i < 10; ++i)
		cout << count_calls() <<endl;
	return 0;
}
