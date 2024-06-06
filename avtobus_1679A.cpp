#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        long long low, high;
        cin >> n;

        if (n % 2 != 0 || n == 2) {
            cout << -1 << '\n';
            continue;
        }

        if (n < 6) {
            low = 1;
            high = 1;
        } else {
            low = (n + 6 - 1) / 6;
            high = n / 4;
        }

        cout << low << " " << high << '\n';
    }

    return 0;
}
