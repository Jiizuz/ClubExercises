// Fibonacci iterative
#include <bits/stdc++.h>

int main() {
    int n;

    std::cin >> n;

    long long int i = 1, j = 0;

    n--;
    while (n--) {
        i += j;
        j = i - j;
    }

    std::cout << i << std::endl;
}