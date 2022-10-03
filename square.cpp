#include "headers/square.h"

#define ROWS 5
#define COLUMNS 5 //В С++ размер массива должен быть константным, поэтому с клавиатуры его вводить нельзя

void square() {
	int valueOfDeterminant;
	int acc = 0;

	int determinant[ROWS][COLUMNS];

	//input
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			cout << "Enter in " << i + 1 << " rows in " << j + 1 << " columns element" << endl;
			cin >> valueOfDeterminant;
			determinant[i][j] = valueOfDeterminant;
		}
	}

	cout << endl;

	//output
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLUMNS; j++) {
			cout << determinant[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < ROWS; i++) {
		acc += determinant[i][i];
	}

	cout << "Result: " << acc << endl;
	cout << endl;
}
