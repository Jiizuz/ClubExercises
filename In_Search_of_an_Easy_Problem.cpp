// Exercise 1030A - https://codeforces.com/problemset/problem/1030/A
#include <iostream>

using namespace std;

int main() {
    int i, j;
    cin >> i;

    while (i--) {
        cin >> j;
        if (j) {
            cout << "HARD" <<endl;
            return 0;
        }
    }

    cout << "EASY" << endl;
    return 0;
}
