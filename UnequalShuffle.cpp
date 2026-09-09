/* Unequal Shuffle

You are given two strings A and B, both of length N.

Each character in both strings is either 'a' or 'b'.

You are allowed to rearrange (shuffle) the characters of A in any order. You can also independently rearrange the characters of B in any order.

Your task is to determine whether it is possible to rearrange the two strings such that:

A[i] != B[i]

for every position i from 1 to N.

Input Format

The first line contains an integer T, the number of test cases.

For each test case:

The first line contains an integer N, the length of the strings.
The second line contains the string A.
The third line contains the string B.
Output Format

For each test case, print:

YES if it is possible to shuffle A and B so that A[i] != B[i] for every position.
NO otherwise.
Constraints
1 ≤ T ≤ 202
1 ≤ N ≤ 100
A and B contain only 'a' and 'b'.
Example

Input

4
2
ab
aa
3
abb
baa
4
aabb
baba
4
abba
aaab

Output

NO
YES
YES
NO
Simple Understanding

Because there are only two characters:

'a' must be paired with 'b'
'b' must be paired with 'a'

Since we can shuffle both strings, the original positions don't matter; only the number of 'a' and 'b' characters matters.  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string A, B;

        cin >> N;
        cin >> A;
        cin >> B;

        int aA = count(A.begin(), A.end(), 'a');
        int aB = count(B.begin(), B.end(), 'a');

        if (aA == N - aB)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
