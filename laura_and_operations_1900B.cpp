#include <iostream>
#include <vector>

using namespace std;

void solve(int a, int b, int c) {
    vector<int> result(3, 0);
    
    if ((b + c) % 2 == 0) {
        result[0] = 1;
    }
    
    if ((a + c) % 2 == 0) {
        result[1] = 1;
    }
    
    if ((a + b) % 2 == 0) {
        result[2] = 1;
    }

    cout << result[0] << " " << result[1] << " " << result[2] << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        solve(a, b, c);
    }

    return 0;
}
