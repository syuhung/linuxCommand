#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	const double pi = 3.14;
	const double e = 1.71;
	//double *ptr = &pi;
	const double *cptr = &pi;
	double const *cptrl = &pi;
	//cout<< "*ptr is: " << *ptr << endl;
	cout << "*cptr is: " << *cptr << endl;
	cout << "*cptrl is: " << *cptrl << endl;
	*cptrl = 1.2;
	cout << "*cptrl is: " << *cptrl << endl;
	cptr = &e;
	cout << "*cptr is: " << *cptr << endl;
	double p = 8.99;
	cptr = &p;
	cout << "*cptr is: " << *cptr << endl;

	int errNumb = 0;
	int *const curErr = &errNumb;
	cout << "*curErr is: " << *curErr << endl;
	*curErr = 3;
	cout << "*curErr is: " << *curErr << endl;
	const int conInt = 2;

	const double *const pip = &pi;
}
