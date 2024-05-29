#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int operations = 0;
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;

        for (int j = 0; j < n; ++j) {
            if (s[j] == 'B') {
                for (int l = j; l < j + k; ++l) {
                    if (l < n) {
                        s[l] = 'W';
                    }
                }
                operations++;
            }
        }

        cout << operations << "\n";
    }

    return 0;
}