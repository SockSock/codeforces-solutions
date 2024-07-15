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

        int low = -1;
        int high = -1;
        int lowCount = 0;
        int highCount = 0;

        for (int i = 0; i < n; ++i) {
            if (v[i] == v[0]) {
                lowCount++;
            }
            if (lowCount == k) {
                low = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; --i) {
            if (v[i] == v[n-1]) {
                highCount++;
            }
            if (highCount == k) {
                high = i;
                break;
            }
        }

        if (low == -1 || high == -1) {
            cout << "NO" << endl;
        } else if ((low >= high && v[0] != v[n-1]) || (high <= low && v[0] != v[n-1])) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
