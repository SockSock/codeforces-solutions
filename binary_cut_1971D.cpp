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

        int cuts = 0;

        int maxLength = 0;
        int currentLength = 0;
        int startIdx = -1;
        int maxStartIdx = -1;
        bool seenOne = false;

        for (size_t i = 0; i < s.length(); ++i) {
            if (s[i] == '0') {
                if (seenOne) {
                    currentLength = 1;
                    startIdx = i;
                    seenOne = false;
                } else {
                    if (currentLength == 0) startIdx = i;
                    currentLength++;
                }
            } else if (s[i] == '1') {
                if (startIdx == -1) continue;
                
                currentLength++;
                seenOne = true;
            }
            
            if (seenOne && currentLength > maxLength) {
                maxLength = currentLength;
                maxStartIdx = startIdx;
            }
        }
        
        if (maxLength > 0 && maxStartIdx != -1) {
            s.erase(maxStartIdx, maxLength);
            cuts++;
        }
        
        if (s.empty()) {
            cout << cuts << endl;
            continue;
        }
        
        int count = 1;
        for (size_t i = 1; i < s.length(); ++i) {
            if (s[i] != s[i-1]) {
                count++;
            }
        }

        cuts += count;
        cout << cuts << endl;
    }

    return 0;
}
