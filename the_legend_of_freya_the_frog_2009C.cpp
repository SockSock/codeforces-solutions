#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int x, y, k;
        cin >> x >> y >> k;

        int xJumps = (x + k - 1) / k;
        int yJumps = (y + k - 1) / k;

        if (yJumps >= xJumps) {
            cout << 2 * yJumps << endl;
        } else {
            cout << 2 * xJumps - 1 << endl;
        }
    }

    return 0;
}
