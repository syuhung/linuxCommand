#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
	string s(10, 'c');
	cout << s << endl;
	cout << sizeof(s) << endl;
	cout << s.size() << endl;
	cout << s[10] << endl;
	return 0;
}
