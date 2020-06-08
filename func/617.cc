#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool hasUpper(const string &s);

void toLowwer(string &s);

int main(int argc, char *argv[])
{
	string s = "I Am Groot!!";
	cout << s << endl;
	hasUpper(s) ? 
	cout << "I Am Groot!! has Upper" << endl:
	cout << "I Am Groot!! has no Upper" << endl;
	toLowwer(s);
	cout << s << endl;
	hasUpper(s) ? 
	cout << "I Am Groot!! has Upper" << endl:
	cout << "I Am Groot!! has no Upper" << endl;
	return 0;
}

bool hasUpper(const string &s)
{
	for (auto ch : s)
		if (isupper(ch))
			return true;
}

void toLowwer(string &s)
{
	for (auto &ch : s)
		if (isupper(ch))
			ch = tolower(ch);
}
