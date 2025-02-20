#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--) {
	    int A, B, C;
	    cin >> A >> B >> C;
	    int SecondLargest = (A + B + C) - max({A, B, C}) - min({A, B, C});
	    cout << SecondLargest << endl;
	}
	return 0;
}
