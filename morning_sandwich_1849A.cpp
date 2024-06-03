#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int b, c, h;
        cin >> b >> c >> h;
        int max = b - 1;

        if (max - (c + h) <= 0) {
            cout << 2*b - 1 << '\n';
        } else {
            cout << 2*c + 2*h + 1 << '\n';
        }
    }

    return 0;
}
