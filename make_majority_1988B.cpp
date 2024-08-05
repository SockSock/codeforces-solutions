#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int oneCount = 0;
        int zeroGroups = 0;
        bool group = false;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '1') {
                oneCount++;
            }
        }

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '0') {
                group = true;
            }

            if (s[i] == '1' && group) {
                zeroGroups++;
                group = false;
            }
        }
        if (group) {
            zeroGroups++;
        }

        if (oneCount > zeroGroups) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
