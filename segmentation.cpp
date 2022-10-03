#include "headers/segmentation.h"

void segment(int a, int b) {

    int c = 0;
    int counter = 0;
    int out = 0;
    int input = 0;
    
    if (a >= b) {
        while (a > c) {
            c += b;
            counter++;
        }
        out =a - (c - b);
        input = counter - 1;
        cout << "Input: " << input << endl;
        cout << "Output: " << out << endl;
    }
    else {
        while (b > c) {
            c += a;
            counter++;
        }
        out = b - (c - a);
        input = counter - 1;
        cout << "Input: " << input << endl;
        cout << "Output: " << out << endl;
    }

    cout << endl;

}
