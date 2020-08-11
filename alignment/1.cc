#include <iostream>
using namespace std;

struct x
{
	char a;
	float b;
	double c;
	bool d;
};

int main()
{
	cout << "sizeof x is " << sizeof(x) << endl;
	x ins;
	cout << "sizeof x's instance is " << sizeof(ins) << endl;
	cout << "&ins is " << &ins << endl;
	x* pi = &ins;
	cout << "pi is " << pi << endl;
	return 0;
}
