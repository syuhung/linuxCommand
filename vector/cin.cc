#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char *argv[])
{
	vector<string> v;
	string temp;
	while(cin >> temp)
		v.push_back(temp);
	//for(auto &i : v)
	//	for (char &c : i)
	//		c = toupper(c);
	for(auto it = v.begin(); it != v.end(); ++it)
	{
		for (auto &c : *it)
			c = toupper(c);
		cout << *it << endl;
	}
	return 0;
}
