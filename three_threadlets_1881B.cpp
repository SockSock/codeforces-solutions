#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        vector<int> v(3);
        v[0] = a;
        v[1] = b;
        v[2] = c;
        sort(v.begin(), v.end());

        if (a == b && b == c) {
            cout << "YES" << endl;
        } else if (v[1] % v[0] == 0 && v[2] % v[0] == 0 && (v[1] / v[0] - 1) + (v[2] / v[0] - 1) <= 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
