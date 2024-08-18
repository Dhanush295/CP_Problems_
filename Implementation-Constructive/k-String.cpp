#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int k;
    cin >> k;
    
    string s;
    cin >> s;
    
    unordered_map<char, int> freq;
    

    for (char c : s) {
        freq[c]++;
    }
    
    string base_string = "";
    

    for (const auto& [char_, count] : freq) {
        if (count % k != 0) {
            cout << -1 << endl;
            return 0;
        }

        base_string += string(count / k, char_);
        cout<<"Base_string: "<<base_string<<"\n";
    }
    
 
    string result = "";
    for (int i = 0; i < k; ++i) {
        result += base_string;
    }
    
    cout << result << endl;
    
    return 0;
}
