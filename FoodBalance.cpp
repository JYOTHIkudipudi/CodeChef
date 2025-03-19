/*  Food Balance
Chef is preparing to cook his dinner.
There are two dishes Chef can make. The first one contains  F1 grams of fat and P1 grams of protein, while the second contains F2 grams of fat and P2 grams of protein.

Chef would like the quantity of fats and proteins he consumes to be as close to each other as possible, 
i.e., the absolute difference between the amount of fats and proteins should be as small as possible.

Help Chef by telling him which dish he'll choose; or if both dishes have the same difference.   */

#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int F1, P1, F2, P2;
        cin >> F1 >> P1 >> F2 >> P2;
        int Dish1 = abs(F1 - P1);
        int Dish2 = abs(F2 - P2);
        if (Dish1 > Dish2) {
                cout << "Second" << endl;
        }
        else if (Dish2 == Dish1) {
                cout << "Both" << endl;
        }
        else {
                cout << "First" << endl;
        }
}
