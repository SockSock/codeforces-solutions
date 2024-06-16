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

        int high = 0;
        for (int i = 0; i < n - 1; ++i) {
            high = max(high, v[i]);
        }
        
        cout << high + v[n-1] << endl;
    }

    return 0;
}