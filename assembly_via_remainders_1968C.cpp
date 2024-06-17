#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> x(n-1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> x[i];
        }

        vector<int> a(n);
        a[0] = x[0] + 501;
        a[1] = a[0] + x[0];

        for (int i = 2; i < n; ++i) {
            a[i] = a[i-1] + x[i-1];
        }

        for (int i : a) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}