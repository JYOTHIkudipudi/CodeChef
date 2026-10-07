/*  Possible Roll

Nikhil is playing a board game with a wizard who uses a custom, magically forged X-sided die.

Unlike a normal die, this die does not have faces numbered 1, 2, 3, ..., X. Instead, its faces are numbered with the first X positive multiples of K.

For example, if the die has 4 sides and K = 3, its faces are:

3, 6, 9, 12

The wizard rolls the die behind a screen and claims that the result is Y.

Given X, K, and Y, determine whether it is mathematically possible for the die to show Y.

Input Format

The only line of input contains three space-separated integers:

X K Y

where:

X = number of sides of the die
K = base multiplier
Y = claimed result
Output Format

Print:

YES

if Y is one of the possible faces of the die.

Otherwise, print:

NO

You may print the answer in any combination of uppercase and lowercase letters.

Constraints
1 ≤ X ≤ 10
1 ≤ K ≤ 10
1 ≤ Y ≤ 100
Example 1

Input:

6 5 20

Output:

YES

Explanation:

The die has 6 faces:

5, 10, 15, 20, 25, 30

Since 20 is one of the faces, the answer is YES.

Example 2

Input:

4 3 15

Output:

NO

Explanation:

The die has 4 faces:

3, 6, 9, 12

Since 15 is not one of the faces, the answer is NO.
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, K, Y;
    cin >> X >> K >> Y;

    if (Y % K == 0 && Y / K <= X)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
