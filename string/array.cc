#include <iostream>
using namespace std;

int main()
{
	int *p = new int[1];
	cout << sizeof p << endl;
	cout << p << endl;
	p[0] = 1;
	p[999] = 2;
	cout << p[9999] << endl;
	delete []p;
	return 0;
}
