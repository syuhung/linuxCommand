#include <iostream>
using namespace std;

typedef char *pstring;

int main(int argc, char *argv[])
{
	char ch = 'c';
	const pstring cstr = &ch;
	cout << "pstring cstr is: " << *cstr << endl;
	*cstr = 'b';
	cout << "pstring cstr is: " << *cstr << endl;
	const char * test = &ch;
	const pstring *ps;
}
