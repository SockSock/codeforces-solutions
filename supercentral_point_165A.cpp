#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i] >> y[i];
    }

    int supercentral = 0;

    for (int i = 0; i < n; ++i) {
        bool has_left = false, has_right = false, has_upper = false, has_lower = false;

        for (int j = 0; j < n; ++j) {
            if (x[j] < x[i] && y[j] == y[i]) {
                has_left = true;
            } else if (x[j] > x[i] && y[j] == y[i]) {
                has_right = true;
            } else if (x[j] == x[i] && y[j] < y[i]) {
                has_lower = true;
            } else if (x[j] == x[i] && y[j] > y[i]) {
                has_upper = true;
            }

            if (has_left && has_right && has_upper && has_lower) {
                supercentral++;
                break;
            }
        }
    }

    cout << supercentral;

    return 0;
}
