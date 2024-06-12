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

        int first = v[0];
        bool same = true;
        for (int i = 0; i < n; ++i) {
            if (v[i] != first) {
                same = false;
                break;
            }
        }
        
        if (same) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            string s(n, 'R');
            s[1] = 'B';
            cout << s << endl;
        }


    }

    return 0;
}
