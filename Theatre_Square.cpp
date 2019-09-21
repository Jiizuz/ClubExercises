// Exercise 1A - http://codeforces.com/problemset/problem/1/A
#include <bits/stdc++.h>

int main() {
    long long int i, j, k;
    std::cin >> i >> j >> k;
    std::cout << std::ceil(i / k) * std::ceil(j / k) << std::endl;
}
