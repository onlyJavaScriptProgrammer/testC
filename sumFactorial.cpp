#include "headers/factorial.h"

int factorial(int n) {

	int result = 1;

	for (int i = 1; i <= n; i++) {
		result *= i;
	}

	return result;

}

void sumFactorial() {

	int k;
	int val = 0;

	cout << "Enter value k for resolve function F(k) = 1! + 2! +3! + ... + k!: ";
	cin >> k;

	for (int i = 1; i <= k; i++) {

		val += factorial(i);

	}

	cout << "Value: " << val;
	cout << endl;
}