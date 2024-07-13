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
        vector<int> v(k);
        for (int i = 0; i < k; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int total = 0;

        for (int i = k - 2; i >= 0; --i) {
            if (v[i] > 1) {
                total += v[i]*2 - 1;
            } else {
                total += v[i];
            }
        }

        cout << total << endl;
    }

    return 0;
}
