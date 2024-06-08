#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> letters(26);
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        string s;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < letters.size(); ++j) {
                if (letters[j] == v[i]) {
                    letters[j] += 1;
                    s += 97 + j;
                    break;
                }
            }
        }

        cout << s << endl;
    }

    return 0;
}
