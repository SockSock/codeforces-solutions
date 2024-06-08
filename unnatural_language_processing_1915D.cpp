#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        vector<string> parts;

        int i = n - 1;
        while (i > 0) {
            if (s[i] == 'a' || s[i] == 'e') {
                parts.push_back("." + s.substr(i - 1, 2));
                i -= 2;
            } else {
                parts.push_back("." + s.substr(i - 2, 3));
                i -= 3;
            }
        }

        string answer;
        for (int j = parts.size() - 1; j >= 0; --j) {
            answer += parts[j];
        }

        answer.erase(0, 1);
        cout << answer << endl;
    }

    return 0;
}
