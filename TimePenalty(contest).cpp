/*     Time Penalty
Unlike a usual CodeChef Starters contest, Starters 173 has a time penalty for every wrong submission.
You are participating in CodeChef Starters 173, which has a time penalty of 10 minutes for every incorrect submission you make.
That is, the total penalty for a problem equals the number of minutes from the start of the contest till your submission receives the AC verdict,
plus 10 minutes for every incorrect submission made before that.
You solved a problem X minutes after the start of the contest, and made Y incorrect submissions while doing so.
What's the total time penalty for this problem?   */  

#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int X, Y;
        cin >> X >> Y;
        int Penalty = X + Y * 10;
        cout << Penalty << endl;
        return 0;
}
