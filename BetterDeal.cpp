/ *  Better Deal
There are 2 stores in Chefland and both sell the same product. The first store sells the product for 100 rupees whereas the second store sells it for 200 rupees.
It is the holiday season and both stores have announced a special discount. The first store is providing a discount of A percent on its product and 
the second store is providing a discount of B percent on its product.
Chef is wondering which store is selling the product at a cheaper price after the discount has been applied. Can you help him identify the better deal?   */


#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int t;
        cin >> t;
        while (t--) {
                int A, B;
                cin >> A >> B;
                int A_Discount = 100 - A;
                int B_Discount = 200 - 2 * B;
                if (A_Discount < B_Discount) {
                        cout << "FIRST" << endl;
                }
                else if (A_Discount > B_Discount) {
                        cout << "SECOND" << endl;
                }
                else {
                        cout << "BOTH" << endl;
                }
        }
        return 0;
}
