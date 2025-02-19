#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;  // Input number

    while (n > 0) {
        sum += n % 10;  // Add last digit to sum
        n = n / 10;  // Remove last digit
    }

    cout << sum << endl;  // Output sum of digits
    return 0;
}
