// Fibonacci by Dynamicall Programmation using memorization
#include <bits/stdc++.h>

long long int fibo(int n, int *fetched);

int main() {
    int n;
    std::cin >> n;

    int fetched[n+1];
    std::fill(fetched, fetched + n + 1, 0);

    std::cout << fibo(n, fetched) << std::endl;
}

long long int fibo(int n, int *fetched) {
    if (!fetched[n])
        if (n == 0 || n == 1)
            return 1;
        else
            fetched[n] = fibo(n-1, fetched) + fibo(n-2, fetched);

    return fetched[n];
}