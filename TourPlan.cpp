/*   Tour Plan
Chef is going on a roadtrip, and is trying to figure out how much it will cost him.

His cab operator gives him the following rates:

A fixed cost of X rupees that will cover up to 50 kilometers, and
Every kilometer past the 50-th has a cost of Y rupees per kilometer.
Chef's destination is Z kilometers away. How much will he need to pay?

Input Format
The only line of input will contain three space-separated integers X,Y, and Z — the fixed cost for  50 kilometers, 
the cost per kilometer after that, and the distance Chef needs to travel.
Output Format
Print a single integer: the amount that Chef needs to pay, in rupees.

Constraints

1≤X,Y,Z≤1000   */


#include <iostream>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

    if (Z <= 50) {
        cout << X << endl;
    } else {
        cout << X + (Z - 50) * Y << endl;
    }

    return 0;
}
