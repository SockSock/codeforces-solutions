#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        int left = 1;
        int right = n;

        while (left <= right) {
            v.push_back(right);
            if (left != right) {
                v.push_back(left);
            }

            right--;
            left++;
        }

        for (int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
