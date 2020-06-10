#include <iostream>
#include <vector>
using namespace std;

int func(int, int);

int main()
{
	vector<int(*)(int, int)> a;
	vector<decltype(func)*> b;
}
