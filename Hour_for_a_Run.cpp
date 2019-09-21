#include <bits/stdc++.h>

int main() {
    double n, i;
    std::cin >> n >> i;
    n = n * i / 10;
    i = 0;

    while (i++ < 9)
        std::cout << (long long int) ceil(n * i) << " ";

    std::cout << std::endl;
}
