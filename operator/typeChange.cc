#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	int i = 5;
	double d = 3.14;
	cout << i*d << endl;
	i *= static_cast<int>(d);
	cout << i << endl;

	const string s = "1235643";
	const string *ps = &s;
	char *pc;
	void *pv;
	cout << "pv is: " << pv << endl;
	cout << "ps is: " << ps << endl;
	//pv = reinterpret_cast<void*>(const_cast<string*>(ps));
	pv = static_cast<void*>(const_cast<string*>(ps));
	cout << "pv is: " << pv << endl;

	cout << "i is: " << i << endl;
	cout << "*pc is: " << *pc << endl;
	i = static_cast<int>(*pc);
	cout << "i is: " << i << endl;

	cout << "pv is: " << pv << endl;
	cout << "&d is: " << &d << endl;
	pv = static_cast<double*>(&d);
	cout << "pv is: " << pv << endl;

	cout << "pc is: " << pc << endl;
	return 0;
}
