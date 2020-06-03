#include <iostream>
using namespace std;

class A
{
public:
	char a;
	int b;
};

class B:A
{
public:
	int a;
};

class C
{
	A a;
	char c;
};

class A1
{
	virtual void fun(){}
};

class C1:public A
{
};

int main(int argc, char *argv[])
{
	cout << "size of class A is: " << sizeof(A) << endl;
	cout << "size of class B is: " << sizeof(B) << endl;
	cout << "size of class C is: " << sizeof(C) << endl;
	cout << "size of class A1 is: " << sizeof(A1) << endl;
	cout << "size of class C1 is: " << sizeof(C1) << endl;
	A a;
	cout << "size of class a is: " << sizeof(a) << endl;
	return 0;
}
