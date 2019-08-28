// Exercise 69A - https://codeforces.com/problemset/problem/69/A
#include <iostream>

using namespace std;

int main() {
    int i, x, y, z, xf = 0, yf = 0, zf = 0;
    cin >> i;

    while (i--) {
    cin >> x >> y >> z;
        xf += x;
        yf += y;
        zf += z;
    }

    cout << (!xf && !yf&& !zf ? "YES" : "NO") << endl;
    return 0;
}
