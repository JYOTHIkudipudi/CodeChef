/*   Too many items
Chef bought N items from a shop. Although it is hard to carry all these items in hand, so Chef has to buy some polybags to store these items.
1 polybag can contain at most 10 items. What is the minimum number of polybags needed by Chef?  */


#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        double t;
        cin >> t;
        while (t--) {
                int N;
                cin >> N;
                double result = (double) N / 10;
                cout << ceil(result) << endl;
        }
        return 0;
}
