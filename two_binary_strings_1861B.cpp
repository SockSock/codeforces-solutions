#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;
        bool no = true;

        for (int i = 0; i < a.length() - 1; ++i) {
            if (a[i] == '0' && b[i] == '0' && a[i+1] == '1' && b[i+1] == '1') {
                no = false;
                break;
            }
        }

        if (no) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
