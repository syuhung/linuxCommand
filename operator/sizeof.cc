#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	string s = "abcdefghhhhhhhhhhh";
	vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
	cout << " size of vector<int> is: " << sizeof(v) << endl;
	cout << " size of string is: " << sizeof(s) << endl;

	int x[10], *p = x;
	cout << "sizeof(x)/sizeof(*x) is: " << sizeof(x)/sizeof(*x) << endl;
	cout << "sizeof(p) is: " << sizeof(p) << endl;
	cout << "sizeof(*p) is: " << sizeof(*p) << endl;
	cout << "sizeof(p)/sizeof(*p) is: " << sizeof(p)/sizeof(*p) << endl;
	return 0;
}
