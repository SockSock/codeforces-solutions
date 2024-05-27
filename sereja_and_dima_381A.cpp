#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int sereja = 0;
    int dima = 0;
    int turn = 0;

    int left = 0, right = n - 1;

    while (left <= right) {
        if (numbers[left] > numbers[right]) {
            if (turn == 0) {
                sereja += numbers[left];
                left++;
            } else {
                dima += numbers[left];
                left++;
            }
        } else {
            if (turn == 0) {
                sereja += numbers[right];
                right--;
            } else {
                dima += numbers[right];
                right--;
            }
        }
        turn = 1 - turn;
    }

    cout << sereja << " " << dima;

    return 0;
}
