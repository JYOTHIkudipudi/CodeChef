/*
    Problem: Echo

    Problem Statement:
    A string of length 4 is called an "echo" if:
        S1 = S3
        S2 = S4

    Given a string S of length 4, check whether it is an echo.

    Examples:
    
    Input:
    meme

    Output:
    Yes

    Explanation:
    S1 = S3 = 'm'
    S2 = S4 = 'e'

    Therefore, "meme" is an echo.

    Input:
    ever

    Output:
    No

    Explanation:
    S2 = 'v' but S4 = 'r'.
    Therefore, "ever" is not an echo.

    Approach:
    Since the string has exactly 4 characters, simply check:
        S[0] == S[2]
        S[1] == S[3]

    If both conditions are true, print "Yes".
    Otherwise, print "No".

    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    if (S[0] == S[2] && S[1] == S[3]) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
