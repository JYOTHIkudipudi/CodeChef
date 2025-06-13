/*   Airlines
An airline operates X aircraft every day. Each aircraft can carry up to 100 passengers.
One day, N passengers would like to travel to the same destination. What is the minimum number of new planes that the airline must buy to carry all N passengers?
 
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of a single line containing two space-separated integers X and N 
— the number of aircraft the airline owns and the number of passengers travelling, respectively.

Output Format 
For each test case, output the minimum number of planes the airline needs to purchase.   */

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int X, N;
        cin >> X >> N;
        int Passengers = 100 * X;

        if (Passengers >= N) {
            cout << 0 << endl; 
        } else {
            int Remaining = N - Passengers;
            int result = (Remaining + 99) / 100; 
            cout << result << endl; 
        }
    }
    return 0;
}
