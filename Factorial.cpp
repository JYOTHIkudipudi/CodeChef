/*   Small Factorial
Write a program to find the factorial value of any number entered by the user.

Input Format
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains an integer N.
Output Format
For each test case, display the factorial of the given number N in a new line.  */

#include <iostream>
using namespace std;
int main() {
        int t;
        cin >> t;
        while (t--) { 
                int i, n;
                long long fact = 1;
                cin >> n;
                for (int i = 1; i <= n; i++) {
                        fact = fact * i;
                }
                cout << fact << endl;
        }
        return 0;
}
