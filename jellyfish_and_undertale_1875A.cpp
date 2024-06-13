#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
            if (v[i] > a) {
                v[i] = a;
            }
        }

        long long answer = b;
        for (int i = 0; i < n; ++i) {
            answer += min(a - 1, v[i]);
        }

        cout << answer << endl;
    }

    return 0;
}
