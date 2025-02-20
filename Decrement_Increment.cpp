/*    Decrement OR Increment
Write a program to obtain N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1.

Input Format
First line will contain a number N.

Output Format
Output a single line, the new value of the number.   */

#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int N;
        cin >> N;
        if (N % 4 == 0) {
                N++;
                cout << N;
        }
        else {
                N--;
                cout << N;
        }
        return 0;
}
