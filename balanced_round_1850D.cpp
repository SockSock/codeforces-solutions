#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int count = 1, answer = 1;

        for (int i = 1;i < n; ++i) {
            if (v[i] - v[i-1] > k) {
                count = 1;
            } else {
                count++;
            }
            answer = max(answer, count);
        }

        cout << n - answer << endl;
    }

    return 0;
}
