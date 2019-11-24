// Connecting Towns - https://www.hackerrank.com/challenges/connecting-towns/problem
#include <iostream>

int main() {
	int t;
	std::cin >> t;

	while (t--) {
		int n;
		std::cin >> n;
		n--;

		long long travel = 1;
		while (n--) {
			long long x;
			std::cin >> x;

			travel = travel * x % 1234567;
		}

		std::cout << travel << std::endl;
	}
}
