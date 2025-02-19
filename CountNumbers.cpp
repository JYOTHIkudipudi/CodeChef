#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;  // Input number

    while (n > 0) {
        count++;  // Increase count for each digit
        n = n / 10;  // Remove the last digit
    }

    cout << count << endl;  // Output digit count
    return 0;
}
