#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;
 
        long long k = max(0LL, min(n, b - a));
        long long profit = (k * (b + (b - k + 1))) / 2;
 
        if (k < n) {
            profit += (n - k) * a;
        }
 
        cout << profit << endl;
    }
 
    return 0;
}