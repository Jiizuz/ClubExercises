// https://www.hackerrank.com/challenges/game-with-cells/problem
#include <iostream>

int main() {
	int n, m;
	std::cin >> n >> m;
	std::cout << (n / 2 + n % 2) * (m / 2 + m % 2) << std::endl;
}
