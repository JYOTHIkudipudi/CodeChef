/*   X Jumps
Chef is currently standing at stair 0 and he wants to reach stair numbered X.
Chef can climb either Y steps or 1 step in one move.
Find the minimum number of moves required by him to reach exactly the stair numbered X. */


#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int X, Y;
                cin >> X >> Y;
                int fullMoves = X / Y;
                int RemainingStairs = X % Y;
                cout << fullMoves + RemainingStairs << endl;
        }
        return 0;
}
