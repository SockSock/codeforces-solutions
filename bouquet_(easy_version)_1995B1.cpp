#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long m;
        cin >> n >> m;
        vector<int> v(n);

        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end());

        int left = 0;
        int right = 0;
        long long current = 0;
        long long best = 0;

        while (right < n) {
            if (v[right] - v[left] > 1) {
                current -= v[left];
                left++;
            } else {
                if (current + v[right] <= m) {
                    current += v[right];
                    best = max(best, current);
                    right++;
                } else {
                    current -= v[left];
                    left++;
                }
            }
        }

        cout << best << endl;
    }

    return 0;
}