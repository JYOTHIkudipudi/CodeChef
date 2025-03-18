/*      Run for Fun
Chef is participating in a race of Y kilometers. However, Chef gets tired and needs to take a rest after every X kilometers.
Can you determine how many times Chef will stop to rest before reaching the finish line?

Input Format
The only line of input contains two space-separated integers X and Y — the number of kilometers Chef can run before needing a rest, and 
the total distance of the race in kilometers.
Output Format
Print a single integer — the number of times Chef will stop to rest before completing the race.

Constraints
1≤X,Y≤10      */

#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
         int x,y;
         cin >> x >> y;
         if(x>=y){
                 cout << 0 << endl;
         }
         else{
                 cout << (y-1)/x << endl;
         }
         return 0;
}
