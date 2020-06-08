#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string s1(argv[1]), s2(argv[2]), s;
	s = s1 + s2;
	cout << s1 << ends << s2 << endl;
	cout << s << endl;
	cout << "argv is " << argv << endl;
	cout << "*argv is " << *argv << endl;
	cout << "argv[0] is " << argv[0] << endl;
	char **p = argv;
	cout << "p is " << p << endl;
	cout << "*p is " << *p << endl;
	for(; *p != 0;)
		cout << *p++ << ends;
	cout << endl;
	return 0;
}
