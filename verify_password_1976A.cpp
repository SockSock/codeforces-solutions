#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string answer = "YES";
        int n;
        string s;
        cin >> n;
        cin >> s;
 
        for (int i = 0; i < n - 1; ++i) {
            if (s[i+1] < s[i]) {
                answer = "NO";
                break;
            }
        }
 
        cout << answer << '\n';
    }
 
    return 0;
}