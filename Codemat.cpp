/*     CodeMat
Code-mat is an annual programming competition organized by the Mathematics and Computing Society (MACS) at IIT BHU. Last year, the event had X participants,
while this year it attracted Y participants.
Determine whether this year's event was more successful by checking if Y is greater than X. If it was more successful, print Yes. Otherwise, print No.  */


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int X,Y;
    cin >> X >> Y;
    if(X<Y){
            cout << "Yes" << endl;
    }
    else{
            cout << "No" << endl;
    }
    return 0;
}
