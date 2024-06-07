#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n;
        cin >> s;
        int count = 0;
        bool bad = false;

        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') {
                count++;
            }
        }

        if (count % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        if (count == 0) {
            cout << "YES" << endl;
            continue;
        }

        if (count == 2) {
            for (int i = 0; i < n - 1; ++i) {
                if (s[i] == '1' && s[i+1] == '1') {
                    cout << "NO" << endl;
                    bad = true;
                    break;
                }
            }
        }

        if (count % 2 == 0 && !bad) {
            cout << "YES" << endl;
        }
    }

    return 0;
}
