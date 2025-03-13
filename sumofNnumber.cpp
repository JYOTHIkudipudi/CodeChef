/*   Given an integer n find the sum of the first n natural number.
Examples:
Input: n = 10
Output: 55
Explanation: 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55.
Input: n = 5
Output: 15
Explanation: 1 + 2 + 3 + 4 + 5 = 15.    */


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n*(n+1)/2 ;
    return 0;
}
