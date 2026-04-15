/*  Cooler
Summer season has come, and now the temperatures are soaring. Hence, Chef has bought an air conditioner to help him cool off.

When turned on, the air conditioner takes exactly X minutes to make the temperature drop 
X degrees Celsius to X−1 degrees. (It does not work below 0 degrees). For example, it takes 10 minutes to go from 10 degrees to 9.

Currently, the temperature is N degrees Celsius, and Chef wants a temperature of M degrees.
It is guaranteed that 0≤M<N. How long (in minutes) should the air conditioner be turned on to achieve the temperature?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
The first and only line of each test case contains 2 integers - N and M.
Output Format
For each test case, output on a new line the number of minutes the air conditioner takes to go from N degrees to M degrees Celsius.

Constraints
1≤T≤100
0≤M<N≤40  */

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N, M;
        cin >> N >> M;

        int time = 0;

        for(int i = N; i > M; i--) {
            time += i;
        }

        cout << time << endl;
    }

    return 0;
}

