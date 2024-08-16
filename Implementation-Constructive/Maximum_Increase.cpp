#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_increase = 1;  
    int current_increase = 1;  

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            current_increase++;  
        } else {
            
            if (current_increase > max_increase) {
                max_increase = current_increase;
            }
            current_increase = 1;  	
        }
    }

    if (current_increase > max_increase) {
        max_increase = current_increase;
    }

    cout << max_increase << endl;
    return 0;
}
