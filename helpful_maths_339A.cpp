#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

int main() {
    string input;
    cin >> input;

    vector<int> numbers;
    stringstream ss(input);
    char temp;
    int num;

    while (ss >> num) {
        numbers.push_back(num);
        ss >> temp;
    }

    sort(numbers.begin(), numbers.end());

    for (size_t i = 0; i < numbers.size(); i++) {
        if (i > 0) {
            cout << "+";
        }
        cout << numbers[i];
    }
    cout << endl;

    return 0;
}
