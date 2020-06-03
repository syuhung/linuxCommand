#include <iostream>
using namespace std;

class A{
	virtual void fun();
	virtual void fun1();
	virtual void fun2();
	virtual void fun3();
};

int main(int argc, char *argv[])
{
	cout << "size of class A is: " << sizeof(A) << endl;
}
