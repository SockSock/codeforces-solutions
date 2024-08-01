#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int count = 0;
        int current = v[0];

        for (int i = 0; i < n; ++i) {
            if (v[i] != current) {
                if (count % 2 != 0) {
                    break;
                }
                current = v[i];
                count = 1;
            } else {
                count++;
            }
        }

        if (count % 2 != 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
