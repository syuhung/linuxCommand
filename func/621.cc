#include <iostream>
using namespace std;


int compare(const int num, const int *p);

int main(int argc, char *argv[])
{
	int a = 6, b = 9;
	cout << compare(a, &b) << endl;
	return 0;
}

int compare(const int num, const int *p)
{
	return (num > *p) ? num : *p;
}
