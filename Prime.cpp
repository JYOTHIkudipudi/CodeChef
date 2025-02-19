#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;  // Numbers less than 2 are not prime

    for (int i = 2; i * i <= n; i++) {  // Check divisibility from 2 to sqrt(n)
        if (n % i == 0)
            return false;  // Not prime if divisible
    }

    return true;  // Prime if no divisors found
}

int main() {
    int n;
    cin >> n;

    if (isPrime(n))
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}
