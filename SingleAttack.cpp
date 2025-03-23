/*    Single-use Attack
Chef is playing a video game, and is now fighting the final boss.
The boss has H health points. Each attack of Chef reduces the health of the boss by X.
Chef also has a special attack that can be used at most once, and will decrease the health of the boss by Y.

Chef wins when the health of the boss is ≤0.
What is the minimum number of attacks needed by Chef to win?   */

#include <bits/stdc++.h>
using namespace std;
int main() {
        int t;
        cin >> t;
        while (t--) {
                int h, x, y;
                cin >> h >> x >> y;
                int remain_health = h - y;
                if (remain_health <= 0) {
                        cout << 1 << endl;
                }
                else {
                        int normal_attack = ceil((double) remain_health / x);
                        cout << normal_attack + 1 << endl;
                }
        }
        return 0;
}
