#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x1, y1;
        cin >> x1 >> y1;
        int x2, y2;
        cin >> x2 >> y2;

        if (x2 == 0 || y2 == 0) {
            cout << "YES" << endl;
            continue;
        }

        int secondMax = max(x2, y2);

        if (secondMax == x2 && x1 > y1) {
            cout << "YES" << endl;
        } else if (secondMax == y2 && y1 > x1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
