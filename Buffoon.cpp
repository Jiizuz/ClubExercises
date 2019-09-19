#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n, c, i;
    cin >> n >> c;
    n--;

    while (n--) {
        cin >> i;
        if (i > c) {
            cout << "N" << endl;
            return 0;
        }
    }
    cout << "S" << endl;
}
