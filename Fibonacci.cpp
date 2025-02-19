#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input number of terms

    int a = 0, b = 1;  // First two terms
    cout << a << " " << b << " ";  // Print first two terms

    for (int i = 3; i <= n; i++) {  // Start from 3rd term
        int next = a + b;  // Next term
        cout << next << " ";
        a = b;  // Move forward
        b = next;
    }

    cout << endl;
    return 0;
}
