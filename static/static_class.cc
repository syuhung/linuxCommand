#include <iostream>
using namespace std;

class Apple
{
public:
	static void printMsg()
	{
		cout << "Welcome to Apple!" << endl;
	}
};

int main(int argc, char *argv[])
{
	Apple::printMsg();
	Apple obj;
	obj.printMsg();
	return 0;
}
