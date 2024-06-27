#include <bits/stdc++.h>

using namespace std;

bool isPossibleToChooseElements(vector<int>& a, vector<int>& b, int k) {
    int half_k = k / 2;

    unordered_set<int> uniqueA(a.begin(), a.end());
    unordered_set<int> uniqueB(b.begin(), b.end());
    unordered_set<int> combined;

    int onlyInA = 0;
    int onlyInB = 0;

    for (int num : uniqueA) {
        if (num >= 1 && num <= k) {
            if (uniqueB.find(num) == uniqueB.end()) {
                onlyInA++;
            }
            combined.insert(num);
        }
    }

    for (int num : uniqueB) {
        if (num >= 1 && num <= k) {
            if (uniqueA.find(num) == uniqueA.end()) {
                onlyInB++;
            }
            combined.insert(num);
        }
    }

    if (onlyInA > half_k || onlyInB > half_k || combined.size() < k) {
        return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n);
        vector<int> b(m);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        if (isPossibleToChooseElements(a, b, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
