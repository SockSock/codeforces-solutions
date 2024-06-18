#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        vector<long long> prefix(n);
        vector<int> max_prefix(n);
        
        prefix[0] = v[0];
        max_prefix[0] = v[0];
        for (int i = 1; i < n; ++i) {
            prefix[i] = prefix[i - 1] + v[i];
            max_prefix[i] = max(max_prefix[i - 1], v[i]);
        }

        int good = 0;
        
        for (int i = 0; i < n; ++i) {
            long long total = prefix[i];
            int high = max_prefix[i];
            if (high == total - high) {
                good++;
            }
        }

        cout << good << endl;
    }

    return 0;
}
