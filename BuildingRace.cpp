/*   Building Race
Two friends Chef and Chefina are currently on floors A and B respectively. 
They hear an announcement that prizes are being distributed on the ground floor and so decide to reach the ground floor as soon as possible.
Chef can climb down X floors per minute while Chefina can climb down Y floors per minute.
Determine who will reach the ground floor first (ie. floor number 0). In case both reach the ground floor together, print Both. */


#include <iostream>
using namespace std;
void solve() {
        int T;
        cin >> T; // Number of test cases

        while (T--) {
                int A, B, X, Y;
                cin >> A >> B >> X >> Y; // Read values

                double timeChef = (double) A / X; // Time taken by Chef
                double timeChefina = (double) B / Y; // Time taken by Chefina

                if (timeChef < timeChefina) {
                        cout << "Chef" << endl;
                } else if (timeChefina < timeChef) {
                        cout << "Chefina" << endl;
                } else {
                        cout << "Both" << endl;
                }
        }
}

int main() {
        solve();
        return 0;
}
