#include <bits/stdc++.h>

using namespace std;

int main() {
    double n, i;
    cin >> n >> i;
    n = n * i / 10;
    i = 0;

    while (i++ < 9)
        cout << (long long int) ceil(n * i) << " ";

    cout << endl;
}
