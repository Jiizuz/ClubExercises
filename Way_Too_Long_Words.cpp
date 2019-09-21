// Exercise 71A - https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>

int main() {
    int i;
    std::cin >> i;

    while (i--) {
        std::string input;
        std::cin >> input;
        int length = input.length();
        if (length > 10)
            std::cout << input[0] << length-2 << input[length-1] << std::endl;
        else
            std::cout << input << std::endl;
    }
}
