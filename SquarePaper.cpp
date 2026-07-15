/*      Square Paper
You have a rectangular piece of paper of dimensions A⋅B. You are wondering what is the largest square piece of paper you can cut off from this rectangular piece.

Find the area of this maximum square paper.

You are only allowed to cut along parallel to the edges of the paper, so either horizontal or vertical cuts.

Input Format
The only line of input contains 2 integers - A and B.
Output Format
Output a single integer - the area of the maximum square you can cut off

Constraints
1≤A, B≤5   */


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int side = min(A, B);
    cout << side * side;

    return 0;
}
