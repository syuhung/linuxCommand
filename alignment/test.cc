#include <iostream>

using namespace std;

struct sds{
	int a;
	double b;
	char flags;
	char buf[];
};

int main()
{
	sds ins;
	ins.flags = 'b';
	cout << "ins.flags is " << ins.flags << endl;
	ins.flags = '5';
	ins.a = 1;
	cout << "buf[-1] is " << ins.buf[-1] << endl;
	return 0;
}
