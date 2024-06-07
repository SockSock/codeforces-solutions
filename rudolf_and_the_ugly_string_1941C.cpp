#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int count = 0;
        string result;

        for (int i = 0; i < n; ++i) {
            if (i <= n - 5 && s.substr(i, 5) == "mapie") {
                result += s[i];
                result += s[i + 1];
                result += s[i + 3];
                result += s[i + 4];
                i += 4;
                count++;
            } else if (i <= n - 3 && (s.substr(i, 3) == "pie" || s.substr(i, 3) == "map")) {
                result += s[i];
                result += s[i + 2];
                i += 2;
                count++;
            } else {
                result += s[i];
            }
        }

        cout << count << endl;
    }

    return 0;
}
