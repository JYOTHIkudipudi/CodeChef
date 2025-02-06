/*   Valentine is Coming
Valentine's Day is approaching and thus Chef wants to buy some chocolates for someone special.
Chef has a total of X rupees and one chocolate costs Y rupees. What is the maximum number of chocolates Chef can buy?  */


#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X, Y;
                cin >> X >> Y;
                if (X < Y) {
                        cout << 0 << endl;
                }
                else {
                        cout << X / Y << endl;
                }
        }
        return 0;
}
