// Exercise 1030A - https://codeforces.com/problemset/problem/1030/A
#include <bits/stdc++.h>

int main() {
    int i, j;
    std::cin >> i;

    while (i--) {
        std::cin >> j;
        if (j) {
            std::cout << "HARD" << std::endl;
            return 0;
        }
    }

    std::cout << "EASY" << std::endl;
}
