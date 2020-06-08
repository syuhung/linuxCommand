#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *agrv[])
{
	vector<int> v1{0, 1, 1, 2};
	vector<int> v2{0, 1, 1, 2, 3, 5, 8};
	for(auto it1 = v1.begin(), it2 = v2.begin();
			it1 != v1.end(); ++it1, ++it2)
	{
		if (*it1 != *it2)
		{
			cout << "false" << endl;
			return false;
		}
		cout << "true" << endl;
		return true;
	}
}
