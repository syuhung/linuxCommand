#include <string>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	string line;
	while( getline(cin, line))
		if (line.size() > 10)
			cout << line << endl;
	return 0;
}
