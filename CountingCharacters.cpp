/*  Counting Characters
Chef has a string S of length N consisting only of characters 'a' and 'b'.

Find the number of 'a's and 'b's in S.

Input Format
The first line contains a single integer T — the number of test cases.
The first line of each test case contains an integer N — the length of the string.
The second line contains the string S.
Output Format
For each test case, print two space-separated integers — the count of 'a' and the count of 'b' in S.   */


#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        string S;
        cin >> S;

        int countA = 0, countB = 0;

        for (char ch : S) {
            if (ch == 'a')
                countA++;
            else
                countB++;
        }

        cout << countA << " " << countB << endl;
    }

    return 0;
}
