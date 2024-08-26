#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper part of the pattern
    for (int i = 0; i <= n; i++) {
        int t = -1;

        for (int j = 0; j < n - i; j++) {
            cout << "  "; 
        }

        for (int j = 0; j <= 2 * i; j++) {
            if (j <= i) {
                cout << ++t;
            } else {
                cout << --t;
            }

            if (j < 2 * i) {
                cout << " "; 
            }
        }

        cout << endl;
    }

    // Lower part of the pattern
    for (int i = n - 1; i >= 0; i--) {
        int t = -1;

        for (int j = 0; j < n - i; j++) {
            cout << "  "; 
        }

        
        for (int j = 0; j <= 2 * i; j++) {
            if (j <= i) {
                cout << ++t;
            } else {
                cout << --t;
            }

            if (j < 2 * i) {
                cout << " "; 
            }
        }

        cout << endl;
    }

    return 0;
}
