#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<tuple<int, int, char>> a;
    int b = 0;
    for (int i = 0; i < s.length(); ++i) {
        a.emplace_back(b, -i, s[i]);
        if (s[i] == '(') {
            b += 1;
        } else {
            b -= 1;
        }
    }

    sort(a.begin(), a.end());

    for (auto& x : a) {
        cout << get<2>(x);
    }

    return 0;
}
