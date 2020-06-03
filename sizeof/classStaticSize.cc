#include <iostream>
using namespace std;

class A
{
public:
	char b;
	virtual void fun(){};
	static int c;
	static int d;
	static int f;
};

class B
{
public:
	int a;
	char b;
	short c;
};

class C
{
public:
	char b;
	int a;
	short c;
};

int main(int argc, char *argv[])
{
	cout << "size of class A is: " << sizeof(A) << endl;
	cout << "size of class B is: " << sizeof(B) << endl;
	cout << "size of class C is: " << sizeof(C) << endl;
	A a;
	cout << "size of class a is: " << sizeof(a) << endl;
	return 0;
}

