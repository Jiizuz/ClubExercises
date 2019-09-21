// Exercise 69A - https://codeforces.com/problemset/problem/69/A
#include <bits/stdc++.h>

int main() {
    int i, x, y, z, xf = 0, yf = 0, zf = 0;
    std::cin >> i;

    while (i--) {
        std::cin >> x >> y >> z;
        xf += x;
        yf += y;
        zf += z;
    }

    std::cout << (!xf && !yf && !zf ? "YES" : "NO") << std::endl;
}
