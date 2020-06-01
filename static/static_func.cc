#include <iostream>
#include <string>
using namespace std;

void demo()
{
	static int count = 0;
	cout << "count is: " << count << endl;

	count++;
}

int main(int argc, char *argv[])
{
	for (int i = 0; i < 5; ++i)
		demo();
	return 0;
}
