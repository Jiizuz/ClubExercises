// Exercise Staircase - https://www.hackerrank.com/challenges/staircase/problem
#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = n; j--;)
            std::cout << (j <= i ? '#' : ' ');
        std::cout << std::endl;
    }
}
