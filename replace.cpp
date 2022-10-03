#include "headers/replace.h"

void replace() {

	int a, b;

	cout << "Enter first value: ";
	cin >> a;
	cout << "Enter second value: ";
	cin >> b;
	cout << endl;

	cout << "before a\t" << a << endl;
	cout << "before b\t" << b << endl;
	cout << endl;

	a = a + b;
	b = a - b;
	a -= b;

	cout << "after a\t\t" << a << endl;
	cout << "after b\t\t" << b << endl;

	cout << endl;

}
