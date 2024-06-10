#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        int lowMax = INT_MAX;

        for (int i = 0; i < n - 1; ++i) {
            int current = max(v[i], v[i+1]);
            if (current < lowMax) {
                lowMax = current;
            }
        }

        cout << lowMax - 1 << endl;
    }

    return 0;
}
