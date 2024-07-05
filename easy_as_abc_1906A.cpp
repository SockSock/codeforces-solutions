#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

bool isValid(int r, int c) {
    return r >= 0 && r < 3 && c >= 0 && c < 3;
}

string findSmallestWord(vector<string>& grid) {
    string smallest = "CCC";
    
    for (int r1 = 0; r1 < 3; ++r1) {
        for (int c1 = 0; c1 < 3; ++c1) {
            for (int d1 = 0; d1 < 8; ++d1) {
                int r2 = r1 + dr[d1];
                int c2 = c1 + dc[d1];
                if (isValid(r2, c2)) {
                    for (int d2 = 0; d2 < 8; ++d2) {
                        int r3 = r2 + dr[d2];
                        int c3 = c2 + dc[d2];
                        if (isValid(r3, c3)) {
                            if ((r1 != r2 || c1 != c2) && (r2 != r3 || c2 != c3) && (r1 != r3 || c1 != c3)) {
                                string word = "";
                                word += grid[r1][c1];
                                word += grid[r2][c2];
                                word += grid[r3][c3];
                                if (word < smallest) {
                                    smallest = word;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return smallest;
}

int main() {
    vector<string> grid(3);
    for (int i = 0; i < 3; ++i) {
        cin >> grid[i];
    }

    string result = findSmallestWord(grid);
    cout << result << endl;

    return 0;
}
