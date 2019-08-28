// Exercise 1A - http://codeforces.com/problemset/problem/1/A
#include <iostream>

using namespace std;

int main() {
    long long int i, j, k;
    cin >> i >> j >> k;
    cout << ((i%k?i/k+1:i/k)*(j%k?j/k+1:j/k)) << endl;
}
