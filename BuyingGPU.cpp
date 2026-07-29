#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z;

        if (Z <= Y) {
            cout << -1 << "\n";
        } else {
            cout << (X + (Z - Y) - 1) / (Z - Y) << "\n";
        }
    }

    return 0;
}
