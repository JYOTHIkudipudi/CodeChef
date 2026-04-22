/*  Contest Registration Fee
A contest is being organized where registration is free for the first X users. Every user who registers after that has to pay a fee of 100 rupees.

Alice registered at position Y. Determine the amount she has to pay.

Input Format
The first and only line of input contains two space-separated integers X and Y — the number of free registrations allowed and Alice's registration position, respectively.
Output Format
Print a single integer denoting the amount Alice has to pay.  */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x, y;
	cin >> x >> y;
	if(y<=x){
	        cout << 0 << endl;
	}
	else{
	        cout << 100 << endl;
	}
return 0;
}
