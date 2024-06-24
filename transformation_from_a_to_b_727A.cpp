#include <bits/stdc++.h>

using namespace std;

bool canTransform(int a, int b, vector<int>& sequence) {
    while (b > a) {
        sequence.push_back(b);
        if (b % 2 == 0) {
            b /= 2;
        } else if (b % 10 == 1) {
            b /= 10;
        } else {
            return false;
        }
    }
    sequence.push_back(b);
    return b == a;
}

int main() {
    int a, b;
    cin >> a >> b;
    vector<int> sequence;

    if (canTransform(a, b, sequence)) {
        cout << "YES" << endl;
        cout << sequence.size() << endl;
        for (auto it = sequence.rbegin(); it != sequence.rend(); ++it) {
            cout << *it << " ";
        }
    } else {
        cout << "NO";
    }

    return 0;
}
