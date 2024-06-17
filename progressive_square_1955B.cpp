#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> v(n * n);
        for (int i = 0; i < n * n; ++i) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        bool found = true;

        multiset<int> elements(v.begin(), v.end());

        for (int i = 0; i < n && found; ++i) {
            for (int j = 0; j < n && found; ++j) {
                int expectedValue = v[0] + i * c + j * d;
                auto it = elements.find(expectedValue);
                if (it != elements.end()) {
                    elements.erase(it);
                } else {
                    found = false;
                }
            }
        }

        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
