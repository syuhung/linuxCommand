#include <iostream>

using namespace std;

void swap(int *&p1, int *&p2);

int main(int argc, char *argv[])
{
	int a = 4, b = 6, *p1 = &a, *p2 = &b;
	cout << "*p1 is " << *p1 << ", *p2 is " << *p2 << endl;
	swap(p1, p2);
	cout << "*p1 is " << *p1 << ", *p2 is " << *p2 << endl;
	return 0;
}

void swap(int *&p1, int *&p2)
{
	int *temp = p1;
	p1 = p2;
	p2 = temp;
}
