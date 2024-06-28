#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        if (b % a == 0) {
            cout << b * (b / a) << endl;
        } else {
            cout << b * (a / gcd(a, b)) << endl;
        }
    }

    return 0;
}
