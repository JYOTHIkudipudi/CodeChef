/*   Multiple of 3
Given a positive integer N, find the nearest multiple of 3.
Multiples of 3 are ......−6,−3,0,3,6,9,12,15,….
Formally, find X, the multiple of 3 with minimum value of ∣N−X∣.
It can be proven that the answer is always unique, i.e. 2 different multiples of 3 cannot be nearest at the same time.

Input Format
The only line of input contains a single integer N.
Output Format
For each test case, output on a new line the nearest multiple of 3.

Constraints
1≤N≤10
  
Sample 1:
Input : 1
Output : 0
Explanation:
The nearest multiple is 0.

For example, 3 is not the answer because ∣1−0∣=1<∣1−3∣=2.
Sample 2:
Input :  5
Output: 6
Explanation:
The nearest multiple of 3 is 6.

Sample 3:
Input   : 9
Output : 9
Explanation:
9 is itself a multiple of 3.   */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    int lower = (N / 3) * 3;
    int upper = lower + 3;

    if (abs(N - lower) <= abs(N - upper)) {
        cout << lower << endl;
    } else {
        cout << upper << endl;
    }

    return 0;
}



