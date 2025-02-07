/*  Weights
Chef is playing with weights. He has an object weighing W units. 
He also has three weights each of  X,Y, and Z units respectively. 
Help him determine whether he can measure the exact weight of the object with one or more of these weights.
If it is possible to measure the weight of object with one or more of these weights, print YES, otherwise print NO.   */


#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int W, X, Y, Z;
                cin >> W >> X >> Y >> Z;
                if ((X + Y) == W || (X + Z) == W || (Y + Z) == W || X == W || Y == W || Z == W || (X + Y + Z) == W) {
                        cout << "YES" << endl;
                }
                else {
                        cout << "NO" << endl;
                }
        }
}
