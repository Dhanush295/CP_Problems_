#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool is_all_upper = true;        
    bool is_all_but_first_upper = true; 

    
    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            is_all_upper = false;
            if (i > 0) {
                is_all_but_first_upper = false;
            }
        } else if (i == 0 && isupper(s[i])) {
            is_all_but_first_upper = false;
        }
    }

    
    if (is_all_upper || is_all_but_first_upper) {
        for (int i = 0; i < s.length(); i++) {
            if (isupper(s[i])) {
                s[i] = tolower(s[i]);
            } else {
                s[i] = toupper(s[i]);
            }
        }
    }

    cout << s;
    return 0;
}
