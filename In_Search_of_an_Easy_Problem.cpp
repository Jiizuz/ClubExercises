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
