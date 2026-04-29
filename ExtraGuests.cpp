/*  Extra Guests
Chef planned a party, and expected X people to be there.
However, more people than expected turned up, so that finally there were Y people at the party!

Chef now has to ensure that there's enough food for everyone.

Chef has already ordered X plates of food, each costing 100 rupees.
For each extra guest at the party, Chef needs to order one plate of food — which now costs 150 rupees.

How much must Chef spend in total to cover food for everyone at the party?

Input Format
The input consists of two space-separated integers X and Y — the number of people expected and the number of people who actually showed up.
Output Format
Output a single integer: the total cost of food.  */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int Plates,Guests;
	cin >> Plates >> Guests;
	int initial_FoodPlates = Plates*100;
	int Extra_Guests = Guests - Plates;
	int ExtraGuestPlate = Extra_Guests * 150;
	cout << initial_FoodPlates + ExtraGuestPlate << endl;
	return 0;

}

