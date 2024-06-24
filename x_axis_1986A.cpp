#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<int> v(3);
        for (int & i : v) {
            cin >> i;
        }
        sort(v.begin(), v.end());

        int median = v[1];
        int answer = abs(v[0] - median) + abs(v[1] - median) + abs(v[2] - median);

        cout << answer << endl;
    }

    return 0;
}
