/*   Teleport Home
Chef has traveled a long way, and now wants to get home.

Chef is 
D
D kilometers away from home, and he can walk at a speed of 
1
1 kilometer per hour.

Chef also has the ability to teleport. He can teleport for a distance of at most 
T
T kilometers, which happens instantly and doesn't require any time.

The teleport can be used at most once.

Find the minimum time, in hours, that Chef needs to reach home.

Input Format
The only line of input will contain two space-separated integers 
D
D and 
T
T — the distance away from home of Chef and the teleport distance, respectively.
Output Format
Output a single integer: the minimum time Chef needs to reach home.

Constraints
1≤D,T≤200   */


#include <iostream>
using namespace std;

int main() {
    int D, T;
    cin >> D >> T;

    cout << max(0, D - T) << endl;

    return 0;
}
