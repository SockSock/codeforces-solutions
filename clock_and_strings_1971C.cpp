#include <iostream>

using namespace std;

bool intersects(int a, int b, int c, int d) {
    if (a > b) swap(a, b);
    if (c > d) swap(c, d);

    bool ab_c = (a < c && c < b);
    bool ab_d = (a < d && d < b);
    bool cd_a = (c < a && a < d);
    bool cd_b = (c < b && b < d);

    return (ab_c ^ ab_d) && (cd_a ^ cd_b);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (intersects(a, b, c, d)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
