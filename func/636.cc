#include <iostream>
#include <string>
using namespace std;

string (&arr(int i))[10];

typedef string arrT[10];
arrT &func(int i);

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};
decltype(odd) &arrPtr(int i)
{
	return (i % 2) ? odd : even;
}

int main(int argc, char **argv)
{
	auto a = arrPtr(2);
	for (int i = 0; i < 5; ++i)
		cout << a[i] << ends;
	cout << endl;
	for (int i = 0; i < 5; ++i)
		a[i] = 2 * a[i];
	for (int i = 0; i < 5; ++i)
		cout << a[i] << ends;
	cout << endl;
	return 0;
}
