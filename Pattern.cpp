/*  

Print this pattern
*
* *
* * *
* * * *
* * * * *

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input number of rows

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= i; j++) {  // Loop for columns
            cout << "* ";
        }
        cout << endl;  // Move to next line
    }

    return 0;
}
