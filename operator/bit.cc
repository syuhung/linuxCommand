#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	char c = 'q';
	cout << ('q' << 6) << endl;
	unsigned long ul1 = 3, ul2 = 7;
	cout << "ul1 & ul2 = " << (ul1 & ul2) << endl;
	cout << "ul1 | ul2 = " << (ul1 | ul2) << endl;
	cout << "ul1 && ul2 = " << (ul1 && ul2) << endl;
	cout << "ul1 || ul2 = " << (ul1 || ul2) << endl;
	return 0;
}
