#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    string* words = new string[t];

    for (int i = 0; i < t; i++) {
        getline(cin, words[i]);
    }

    for (int i = 0; i < t; i++) {
        int index = 1;

        char firstChar = words[i][0];
        char secondChar = words[i][1];
        int firstAsciiValue = static_cast<int>(firstChar);
        int secondAsciiValue = static_cast<int>(secondChar);

        int toAddFirst = (firstAsciiValue - static_cast<int>('a')) * 25;
        index += toAddFirst;

        if (secondAsciiValue > firstAsciiValue) {
            index += secondAsciiValue - static_cast<int>('a') - 1;
        } else {
            index += secondAsciiValue - static_cast<int>('a');
        }

        cout << index << "\n";
    }

    delete[] words;
    return 0;
}
