#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int answer = INT_MAX;

        for (int i = 0; i < n; ++i) {
            int d, s;
            cin >> d >> s;

            answer = min(answer, d + (s - 1) / 2);
        }

        cout << answer << endl;
    }

    return 0;
}
