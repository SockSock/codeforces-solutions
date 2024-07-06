#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        if (k == 2 || k == 3 || k == 5) {
            int operations = INT_MAX;

            for (int i = 0; i < n; ++i) {
                int remainder = v[i] % k;
                if (remainder == 0) {
                    operations = 0;
                    break;
                }
                operations = min(operations, k - remainder);
            }

            cout << operations << endl;
        } else {
            int count = 0;

            for (int i = 0; i < n; ++i) {
                if (v[i] % 2 == 0) {
                    count++;
                }
            }

            int caseOne = INT_MAX;

            for (int i = 0; i < n; ++i) {
                int remainder = v[i] % k;
                if (remainder == 0) {
                    caseOne = 0;
                    break;
                }
                caseOne = min(caseOne, k - remainder);
            }

            int caseTwo = max(0, 2 - count);

            if (n == 1) {
                cout << caseOne << endl;
            } else {
                cout << min(caseOne, caseTwo) << endl;
            }
        }
    }

    return 0;
}
