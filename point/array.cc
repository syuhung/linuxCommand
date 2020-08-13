#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[] = "abcdefghijklmn";
	char* pstr = str;
	for (int i = 0; i < strlen(str); ++i)
		cout << *(pstr+i) << ends;
	return 0;
}
