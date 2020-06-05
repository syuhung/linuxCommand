#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	vector<int> v{1, 2, 3, 4, 5};
	for (auto it = v.begin(); it != v.end(); ++it)
		cout << *it << ends;
	cout << endl;
	for(auto &i : v)
		i = i % 2 ? 2 * i : i;
	for (auto it = v.begin(); it != v.end(); ++it)
		cout << *it << ends;
	cout << endl;
	return 0;
}
