/* A or B
There are two problems in a contest.

Problem A is worth 500 points at the start of the contest.
Problem B is worth 1000 points at the start of the contest.
Once the contest starts, after each minute:
Maximum points of Problem A reduce by 2 points .
Maximum points of Problem B reduce by 4 points.
It is known that Chef requires X minutes to solve Problem A correctly and Y minutes to solve Problem B correctly.

Find the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.  */


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int X, Y;
        cin >> X >> Y;

        // Case 1: Solve A first, then B
        int scoreAFirst = (500 - (X * 2)) + (1000 - ((X + Y) * 4));

        // Case 2: Solve B first, then A
        int scoreBFirst = (1000 - (Y * 4)) + (500 - ((X + Y) * 2));

        // Max of both cases
        cout << max(scoreAFirst, scoreBFirst) << endl;
    }
    return 0;
}
