#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> skills(2 * n);

        // Read the skill levels
        for (int i = 0; i < 2 * n; ++i) {
            cin >> skills[i];
        }

        // Sort the skill levels
        sort(skills.begin(), skills.end());

        // Minimum absolute difference between medians
        int min_diff = skills[n] - skills[n - 1];

        // Print the result for this test case
        cout << min_diff << "\n";
    }

    return 0;
}
