// Restaurant - https://www.hackerrank.com/challenges/restaurant/problem
#include <iostream>

int main() {
	int t, l, b, k;
	std::cin >> t;

	while (t--) {
		std::cin >> l >> b;

		k = b;
		for (int i = l, j = l; i > 0; j = i, i = k % i, k = j);

		std::cout << l/k * b/k << std::endl;
	}
}
