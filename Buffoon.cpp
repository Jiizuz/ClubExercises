#include <bits/stdc++.h>

int main() {
    long long int n, c, i;
    std::cin >> n >> c;
    n--;

    while (n--) {
        std::cin >> i;
        if (i > c) {
            std::cout << "N" << std::endl;
            return 0;
        }
    }
    std::cout << "S" << std::endl;
}
