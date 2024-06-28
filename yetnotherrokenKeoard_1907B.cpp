#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        string newS;
        vector<int> lower;
        vector<int> upper;
        set<int> death;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == 'b') {
                if (!lower.empty()) {
                    death.insert(lower.back());
                    death.insert(i);
                    lower.pop_back();
                    continue;
                }
                death.insert(i);
                continue;
            }

            if (s[i] == 'B') {
                if (!upper.empty()) {
                    death.insert(upper.back());
                    death.insert(i);
                    upper.pop_back();
                    continue;
                }
                death.insert(i);
                continue;
            }

            if (islower(s[i])) {
                lower.push_back(i);
            } else {
                upper.push_back(i);
            }
        }

        for (int i = 0; i < s.length(); ++i) {
            if (death.find(i) != death.end()) {
                continue;
            }
            newS += s[i];
        }

        cout << newS << endl;
    }

    return 0;
}
