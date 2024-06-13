#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int low, high;
        cin >> low >> high;

        if (high - low >= 100) {
            int uBound = (high - 90) / 100;
            int answer = 100*uBound + 90;

            cout << answer << endl;
        } else {
            int luck = INT_MIN;
            int luckiest = low;

            for (int i = low; i <= high; ++i) {
                int largest = INT_MIN;
                int smallest = INT_MAX;

                int num = i;
                while (num > 0) {
                    int digit = num % 10;
                    if (digit > largest) largest = digit;
                    if (digit < smallest) smallest = digit;
                    num /= 10;
                }

                int difference = largest - smallest;
                if (difference > luck) {
                    luck = difference;
                    luckiest = i;
                }
            }

            cout << luckiest << endl;
        }
    }

    return 0;
}
