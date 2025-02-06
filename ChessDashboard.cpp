/*   Chessboard Distance
The Chessboard Distance for any two points (X1,Y1) and (X2,Y2) on a Cartesian plane is defined as max(∣X1−X2∣,∣Y1−Y2∣).
You are given two points (X1,Y1) and (X2,Y2). Output their Chessboard Distance.
Note that, ∣P∣ denotes the absolute value of integer P. For example, ∣−4∣=4 and ∣7∣=7. */


#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X1, Y1, X2, Y2;
                cin >> X1 >> Y1 >> X2 >> Y2;
                int D1 = abs(X1 - X2);
                int D2 = abs(Y1 - Y2);
                int Maxvalue = max(D1, D2);
                cout << Maxvalue << endl;
        }
        return 0;
}
