/*   Second Max of Three Numbers
Problem Statement
Write a program that accepts sets of three numbers, and prints the second-maximum number among the three.

Input
First line contains the number of triples, N.
The next N lines which follow each have three space separated integers.
Output
For each of the N triples, output one new line which contains the second-maximum integer among the three.

Constraints
1 ≤ N ≤ 6
1 ≤ every integer ≤ 10000
The three integers in a single triplet are all distinct. That is, no two of them are equal.
Sample 1:
Input
3
1 2 3
10 15 5
100 999 500
Output
2
10
500     */


#include <stdio.h>

int main() {
        int t;
        scanf("%d", & t);
        while (t--) {
                int a, b, c;
                scanf("%d%d%d", & a, & b, & c);
                if ((a > b && a < c) || (a < b && a > c)) {
                        printf("%d\n", a);
                }
                else if ((b > a && b < c) || (b < a && b > c)) {
                        printf("%d\n", b);
                }
                else {
                        printf("%d\n", c);
                }
        }
        return 0;
}
