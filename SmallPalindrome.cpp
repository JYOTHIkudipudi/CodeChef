/*   Small Palindrome
Chef has X ones (1s) and Y twos (2s) in his collection. He wants to arrange all of them into the smallest possible palindrome number using all of these ones (1s) and twos (2s).
Note: 
X and Y are both even numbers.
† A palindromic number is a number that remains the same when its digits are reversed.
  
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case will contain two space-separated integers X, and Y — the amount of ones (1s) and twos (2s) respectively.

Output Format
For each test case, output on a new line the smallest possible palindrome number using X ones (1s) and Y twos (2s).

  // code
  
#include <bits/stdc++.h>
using namespace std;
        void smallestPalindrome(int X, int Y) {
                string half = "";

                // Use half of the 1s first
                half.append(X / 2, '1');

                // Use half of the 2s next
                half.append(Y / 2, '2');

                // Mirror the first half to form the full palindrome
                string palindrome = half + string(half.rbegin(), half.rend());

                cout << palindrome << endl;
        }

        int main() {
                int T, X, Y;
                cin >> T;

                while (T--) {
                        cin >> X >> Y;
                        smallestPalindrome(X, Y);
                }

                return 0;
        }
