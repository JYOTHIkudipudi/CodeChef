/*  Water Mixing
Chef is setting up a perfect bath for himself. He has  X litres of hot water and Y litres of cold water.
The initial temperature of water in his bathtub is A degrees. On mixing water, the temperature of the bathtub changes as following:
The temperature rises by 1 degree on mixing 1 litre of hot water.
The temperature drops by 1 degree on mixing 1 litre of cold water.
Determine whether he can set the temperature to B degrees for a perfect bath.   */


#include <bits/stdc++.h>

using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int A, B, X, Y;
                cin >> A >> B >> X >> Y;

                if (A == B) {
                        cout << "YES" << endl;
                }
                else if (A < B) {
                        cout << ((A + X >= B) ? "YES" : "NO") << endl;
                }
                else { // A > B
                        cout << ((A - Y <= B) ? "YES" : "NO") << endl;
                }
        }
        return 0;
}
