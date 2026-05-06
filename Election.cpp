/*  Election
Chef's party is contesting an election with N total seats. It has won K seats.

A party can form the government only if it has a strict majority, i.e. at least 


Chef's party may form a coalition with other parties to get additional seats.
Find the minimum number of additional seats Chef's party needs to form the government.

Input Format
The input consists of two space-separated integers N and K — the total number of seats and the number of seats that Chef's party has won.

Output Format
Output a single integer — the minimum number of additional seats required.

Constraints
1≤N≤500
0≤K≤N

Explanation:
Chef's party already has a majority.  */

#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    int required = (N / 2) + 1;

    if (K >= required)
        cout << 0;
    else
        cout << (required - K);

    return 0;
}

