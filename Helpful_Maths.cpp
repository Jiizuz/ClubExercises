// Exercise 339A - http://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>

int main() {
    std::string input;

    std::cin >> input;

    for (int i = 0, length = input.length(); i < length; i += 2)
        for (int j = 0; j < length - i - 2; j += 2)
            if (input[j] > input[j + 2]) std::swap(input[j], input[j + 2]);

    std::cout << input << std::endl;
}
