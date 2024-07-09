#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        set<char> valid;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == s[i+1]) {
                i++;
            } else {
                valid.insert(s[i]);
            }
        }

        string answer;

        for (auto it = valid.begin(); it != valid.end(); ++it) {
            answer += *it;
        }

        cout << answer << endl;
    }

    return 0;
}