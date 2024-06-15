#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int original =  n;
    int first = n / 10;
    int lastDigit = n % 10;
    n /= 10;
    n /= 10;
    n *= 10;
    n += lastDigit;
    int second = n;

    if (original >= first && original >= second) {
        cout << original;
    } else if (first >= second) {
        cout << first;
    } else {
        cout << second;
    }

    return 0;
}