/*   Chef and his Apps
Chef's phone has a total storage of S MB. Also, Chef has 2 apps already installed on his phone which occupy X MB and Y MB respectively.
He wants to install another app on his phone whose memory requirement is Z MB.
For this, he might have to delete the apps already installed on his phone.
Determine the minimum number of apps he has to delete from his phone so that he has enough memory to install the third app. */


#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int S, X, Y, Z;
                cin >> S >> X >> Y >> Z;
                int availableStorage = S - (X + Y);
                if (availableStorage >= Z) {
                        cout << 0 << endl;
                }
                else if (availableStorage + max(X, Y) >= Z) {
                        cout << 1 << endl;
                }
                else {
                        cout << 2 << endl;
                }
        }
        return 0;
}
