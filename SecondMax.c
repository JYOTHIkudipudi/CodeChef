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
The three integers in a single triplet are all distinct. That is, no two of them are equal.   */

#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        scanf("%d",&n);
        while(n--){
                int a,b,c;
                scanf("%d%d%d",&a,&b,&c);
                if((a>b && b>c) || (a<b && b<c)){
                        printf("\n %d",b);
                }
                else if((b>a && a>c) || (b<a && a<c)){
                        printf("\n %d",a);
                }
                else{
                        printf("\n %d",c);
                }
        }
        return 0;
}
