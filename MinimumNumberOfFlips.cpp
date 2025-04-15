/*  Minimum number of Flips
Chef has an array A of length N consisting of 1 and −1 only.
In one operation, Chef can choose any index (1≤i≤N) and multiply the element Ai  by −1.
Find the minimum number of operations required to make the sum of the array equal to 0. Output -1 if the sum of the array cannot be made 0.  */


#include <iostream>
#include <vector>
#include <numeric> // for std::accumulate
#include <algorithm> // for std::count

using namespace std;

int solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    int neg_count = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
        if(a[i] == -1){
            neg_count++;
        }
    }

    if (n % 2 != 0) {
        return -1; // If n is odd, sum cannot be zero
    }

    if (sum == 0) {
        return 0;
    }

    int one_count = n - neg_count;
    
    if(one_count == n/2){
        return 0;
    }
    
    return abs(one_count - n/2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}
