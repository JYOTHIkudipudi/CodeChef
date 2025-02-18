/*      Chef Eren
Chef is a very big fan of Eren Yeager.
In the last season of Attack on Titan, there were N episodes numbered from 1 to N.
Each even indexed episode was A minutes long and each odd indexed episode was B minutes long.
Calculate the total duration (in minutes) of the last season.  */

#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;  // Number of test cases
    
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;               // N: number of episodes, A: duration of even-indexed episodes, B: duration of odd-indexed episodes
        
        // Calculate the number of odd and even indexed episodes
        int odd_count = (N + 1) / 2;                  // Odd indexed episodes
        int even_count = N / 2;                       // Even indexed episodes
        
        // Calculate the total duration
        int total_duration = (odd_count * B) + (even_count * A);
        
        // Output the result
        cout << total_duration << endl;
    }
    
    return 0;
}
