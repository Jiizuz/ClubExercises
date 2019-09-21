// Exercise 230A - http://codeforces.com/problemset/problem/230/A
#include <bits/stdc++.h>

// s = Kirito strength
// n = dragons number

int main() {
    long int s, n, i, j;
    std::cin >> s >> n;
    std::vector < pair < int, int > > dragons;

    while (n--) {
        std::cin >> i >> j;
        dragons.push_back(std::make_pair(i, j));
    }

    std::sort(dragons.begin(), dragons.end());

    for (i = 0; i < dragons.size(); i++) {
    	if (s > dragons[i].first) {
    	    s += dragons[i].second;
    	} else {
    	    std::cout << "NO" << std::endl;
    	    return 0;
    	}
    }

    std::cout << "YES" << std::endl;
}
