#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        bool yes = true;
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int secondNumber = 0;
        for (int i = 1; i < n; ++i) {
            if (v[i] % v[0] != 0) {
                secondNumber = v[i];
                break;
            }
        }

        for (int i = 1; i < n; ++i) {
            if (v[i] % v[0] != 0 && v[i] % secondNumber != 0) {
                cout << "No" <<'\n';
                yes = false;
                break;
            }
        }

        if (yes) {
            cout << "Yes" << '\n';
        }
    }

    return 0;
}
