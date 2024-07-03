#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<long long> chosen;
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        int high = v[0];
        for (int i = 1; i < n; ++i) {
            if (v[i] > high) {
                high = v[i];
            } else {
                chosen.push_back(high - v[i]);
            }
        }

        sort(chosen.begin(), chosen.end());
        long long total = 0;
        long long runningTotal = 0;
        long long increment = chosen.size() + 1;

        for (int i = 0; i < chosen.size(); ++i) {
            chosen[i] -= runningTotal;
            total += chosen[i] * increment;
            runningTotal += chosen[i];
            increment--;
        }

        cout << total << endl;
    }

    return 0;
}
