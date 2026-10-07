#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        string S, L;
        cin >> S >> L;

        set<char> leftHand;

        for (char ch : L) {
            leftHand.insert(ch);
        }

        int current = 0;
        int maximum = 0;
        char previousHand = '?';

        for (char ch : S) {

            char currentHand;

            if (leftHand.count(ch))
                currentHand = 'L';
            else
                currentHand = 'R';

            if (currentHand == previousHand) {
                current++;
            } else {
                current = 1;
                previousHand = currentHand;
            }

            maximum = max(maximum, current);
        }

        cout << maximum << '\n';
    }

    return 0;
}
