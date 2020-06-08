#include <iostream>
#include <stdexcept>

using namespace std;

int main(int argc, char *argv[])
{
	int a, b;
	while(cin >> a >> b) {
		try {
			if (b == 0)
				throw domain_error("floating error");
			else
				cout << a / b << endl;
		} catch (domain_error err) {
			cout << err.what()
				 << "\nTry again? Entry y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
		}
	}
	return 0;
}
