/*   Triangle Checking
You are given 3 sticks of length A, B and C.
Please check if they can be the side lengths of a valid non-degenerate triangle.
Recall that  A,B and C can be the side-lengths of a non-degenerate triangle if and only if each of the following 3 conditions hold:
   A+B>C                             B+C>A                          A+C>B
Constraints
1≤A, B, C≤10  */


#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int A, B, C;
        cin >> A >> B >> C;
        if ((A + B) > C && (B + C) > A && (A + C) > B) {
                cout << "Yes" << endl;
        }
        else {
                cout << "NO" << endl;
        }
        return 0;
}
