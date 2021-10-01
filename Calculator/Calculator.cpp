#include <iostream>

using namespace std;

int main()
{
	cout << " * / Calculator + -  ( 0.3 )" << endl;
	
	
	double x, y;
	
	
	for (char a = 0; a != 61;)
	{
		cin >> a;

		if (a == 42) {
			cin >> y;
			x = x * y;
			cout << "+\n";
			cout << x;
		}
		if (a == 43) {
			cin >> y;
			x = x + y;
			cout << "+\n";
			cout << x;
		}
		if (a == 45) {
			cin >> y;
			x = x - y;
			cout << "+\n";
			cout << x;
		}
		if (a == 47) {
			cin >> y;
			x = x / y;
			cout << "+\n";
			cout << x;
		}

		cout << "the answer is = " <<x;
	}


	return 0;
}
