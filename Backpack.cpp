// Backpack Exercise Algorithm by DP
#include <bits/stdc++.h>

int main() {
    int n = 3, w = 5;

    int value[] = { 60, 100, 120 };
    int weigth[] = { 1, 2, 3 };
    int table[n+1][w+1];

    for (int i = 0; i <= n; i++) {
	for (int j = 0; j <= w; j++) {
	    if (i-1 == 0) table[0][j] = 0;
	    if (j-1 == 0) table[i][0] = 0;
	    if (weigth[i-1] <= j) {
		table[i][j] = std::max(table[i-1][j], table[i-1][j-weigth[i-1]]+value[i-1]);
	    } else {
		table[i][j] = table[i-1][j];
	    }
	}
    }

    std::cout << table[n][w] << std::endl;
}
