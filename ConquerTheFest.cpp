/*    Conquer the Fest!!
IIIT Pune is celebrating its annual fest with a lineup of exciting events. 
And among the technical events InfInITy stands out as a prestigious coding contest, known for its challenging coding problems.
This year, the contest includes a difficult problem.
The problem has a difficulty level of B, and a participant needs an IQ of at least 10×B to solve it.
You have an IQ of N. Can you take on the challenge and solve this tough problem, or is it too hard to crack?   */

#include <bits/stdc++.h>
using namespace std;
int main() {
        // your code goes here
        int N, B;
        cin >> N >> B;
        int IQ = B * 10;
        if (IQ <= N) cout << "YES" << endl;
        else cout << "NO" << endl;
        return 0;
}
