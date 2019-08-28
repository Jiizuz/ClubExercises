// Exercise 71A - https://codeforces.com/problemset/problem/71/A
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    int i;
    cin>>i;

    while (i--) {
        string input;
        cin >> input;
        int len = input.length();
        if (len > 10) cout << input[0] << len-2 << input[len-1] << endl; else cout << input << endl;
    }
}
