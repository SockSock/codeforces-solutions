#include <cmath>
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

        for (int i = 0; i < n; ++i) {
            if (s[i] == 'U') {
                count++;
            }
        }

        if (count % 2 == 0) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
        }
    }

    return 0;
}
