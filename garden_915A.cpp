#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int best = INT_MAX;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        if (k % x == 0 && k / x < best) {
            best = k / x;
        }
    }

    cout << best;
    return 0;
}
