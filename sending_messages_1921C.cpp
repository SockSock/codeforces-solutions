#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<long long> v(n + 1);
        v[0] = 0;
        for (long long i = 1; i <= n; ++i) {
            cin >> v[i];
        }

        for (long long i = 1; i <= n; ++i) {
            f-= min(a * (v[i] - v[i - 1]), b);
        }

        if (f > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
