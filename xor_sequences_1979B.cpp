#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        for (int i = 0; i < 30; i++) {
            if ((a & (1 << i)) != (b & (1 << i))) {
                cout << (1ll << i) << "\n";
                break;
            }
        }
    }
}