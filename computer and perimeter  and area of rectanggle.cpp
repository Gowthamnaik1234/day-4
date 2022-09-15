#include <iostream>

using namespace std;

int main() {
    // declare variables
    int l, w, i, j;

    // take input
    cout << "Enter the length: ";
    cin >> l;
    cout << "Enter the width: ";
    cin >> w;

    // new line
    cout << endl;

    // display the pattern
    for (i = 1; i <= w; i++) {
        for (j = 1; j <= l; j++) {
            // print *
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
