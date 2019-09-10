// Exercise 230A - http://codeforces.com/problemset/problem/230/A
#include <bits/stdc++.h>

using namespace std;

// s = Kirito strength
// n = dragons number

int main() {
    long int s, n, i, j;
    cin >> s >> n;
    vector < pair < int, int > > dragons;

    while (n--) {
	cin >> i >> j;
	dragons.push_back(make_pair(i, j));
    }

    sort(dragons.begin(), dragons.end());

    for (i = 0; i < dragons.size(); i++) {
	if (s > dragons[i].first) {
	    s += dragons[i].second;
	} else {
	    cout << "NO" << endl;
	    return 0;
	}
    }

    cout << "YES" << endl;
}
