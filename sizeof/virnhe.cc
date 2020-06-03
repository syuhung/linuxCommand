#include <iostream>
using namespace std;

class A
{
	virtual void fun(){}
};

class B
{
	virtual void fun2(){}
};

class C : virtual public A, virtual public B
{
public:
	virtual void fun3(){}
};

int main(int argc, char *argv[])
{
	cout << "size of class A is: " << sizeof(A) << endl;
	cout << "size of class B is: " << sizeof(B) << endl;
	cout << "size of class C is: " << sizeof(C) << endl;
	return 0;
}
