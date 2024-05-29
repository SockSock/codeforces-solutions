#include <iostream>

using namespace std;

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {
    int a, b;
    cin >> a >> b;
    int low = min(a, b);

    cout << factorial(low);

    return 0;
}