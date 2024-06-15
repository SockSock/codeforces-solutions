#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int start = 0, end = 0;
        long long operations = 0;
        bool same = true;

        char reference = s[0];
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] != reference) {
                same = false;
                break;
            }
        }
        if (same) {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '1') {
                start = i;
                break;
            }
        }
        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] == '0') {
                end = i;
                break;
            }
        }

        int low = start;
        int high = low + 1;

        while (high <= end) {
            if (s[high] == '0') {
                s[high] = '1';
                s[low] = '0';
                operations += high - low + 1;
                low++;
            }
            high++;
        }

        cout << operations << endl;
    }

    return 0;
}