/*  Reach fast
Chef is standing at coordinate A while Chefina is standing at coordinate B.
In one step, Chef can increase or decrease his coordinate by at most K.

Determine the minimum number of steps required by Chef to reach Chefina.  */


#include <bits/stdc++.h>
using namespace std;
int main() {
        int t;
        cin >> t;
        while (t--) {
                int A, B, K;
                cin >> A >> B >> K;
                int distance = abs(A - B);
                cout << (distance + K - 1) / K << endl;
        }
        return 0;
}
