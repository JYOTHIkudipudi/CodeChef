/*  Pizza Split
Chef and Chefina are ordering pizza for dinner.
Each pizza has N slices.
What is the minimum number of pizzas they need to order, so that both Chef and Chefina can eat an equal number of slices?
Chef and Chefina must eat a positive integer number of slices.

Input Format
The first and only line of input will contain a single integer N, the number of slices in one pizza.
Output Format
Print a single integer: the minimum number of pizzas that must be ordered so that Chef and Chefina can eat an equal number of slices.

Constraints
1≤N≤10    */

#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int N;
        cin >> N;
        if (N % 2 == 0) {
                cout << 1 << endl;
        }
        else {
                cout << 2 << endl;
        }
        return 0;
}
