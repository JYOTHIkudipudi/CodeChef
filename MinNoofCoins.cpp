/*   Minimum number of coins
Chef has infinite coins in denominations of rupees 5 and rupees 10.
Find the minimum number of coins Chef needs, to pay exactly X rupees. If it is impossible to pay X rupees in denominations of rupees 5 and 10 only, print −1.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single integer X.

Output Format
For each test case, print a single integer - the minimum number of coins Chef needs, to pay exactly X rupees. 
If it is impossible to pay X rupees in denominations of rupees 5 and 10 only, print −1.  */


#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X;
                cin >> X;
                if (X % 5 == 0) {
                        if (X % 10 == 0) {
                                cout << X / 10 << endl;
                        }
                        else {
                                cout << (X / 10) + 1 << endl;
                        }
                } else {
                        cout << -1 << endl;
                }
        }
        return 0;
}
