    #include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int shortest_repeating_substring(const string& s) {
    int n = s.length();
    int ans = n; // Initialize answer to maximum possible length

    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            string k = s.substr(i, j - i + 1); // Candidate for repeating substring k
            bool valid = true; // Flag to check if at most one character is different

            for (int l = 0; l < n; ++l) {
                if (s[l] != k[l % k.length()]) {
                    if (!valid) {
                        valid = false;
                        break; // More than one character is different, break inner loop
                    }
                    valid = false; // Mark that one character is different
                }
            }

            if (valid) {
                ans = min(ans, (int)k.length()); // Update answer if k satisfies the conditions
            }
        }
    }

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int result = shortest_repeating_substring(s);
        cout << result << endl;
    }

    return 0;
}
