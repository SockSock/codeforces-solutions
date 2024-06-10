#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.length() < 7) {
        cout << "NO";
    } else {
        bool found = false;
        for (int i = 0; i < s.length() - 6; ++i) {
            if (s.substr(i, 7) == "0000000" || s.substr(i, 7) == "1111111") {
                cout << "YES";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "NO";
        }
    }

    return 0;
}