#include <iostream>
#include <vector>

using namespace std;

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);

int main(int argc, char **argv)
{
	int (*addP)(int a, int b) = add;
	int (*subP)(int a, int b) = sub;
	int (*mulP)(int a, int b) = mul;
	int (*divideP)(int a, int b) = divide;
	vector<int(*)(int, int)> vf{addP, subP, mulP, divideP};
	for (auto i : vf)
		cout << i(6, 3) << endl;
	vector<int(*)(int, int)> vn{add, sub, mul, divide};
	for (auto i : vn)
		cout << i(6, 3) << endl;
	return 0;
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	return a / b;
}
