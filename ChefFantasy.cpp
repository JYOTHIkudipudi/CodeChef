/*     Chef Fantasy 11
All of Chef's friends are playing fantasy cricket based upon the ODI World Cup, and Chef would like to join them.
For a certain cricket match, Chef has decided upon his team of  11 players.
However, he hasn't yet decided who should be the captain and who should be the vice-captain.
He's narrowed his decision down to N players out of the 11, 
from which he'll choose one to be the captain and one to be the vice captain. How many different choices does he have?   */


#include <bits/stdc++.h>
using namespace std;
void solve() {
        int n;
        cin >> n;
        int ans = n * (n - 1);
        cout << ans << endl;
}

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                solve();
        }
        return 0;
}
