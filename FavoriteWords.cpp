/*  Favorite Words
Chef loves his own name. So, he likes a word if and only if it either starts with the letter 'c', or ends with the letter 'f' (or both).

You are given a string S that represents a four-letter word.S contains only lowercase English letters.

Does Chef like the word represented by string S?

Input Format
The only line of input will contain a string S, consisting of four lowercase English letters.
Output Format
Output a single string denoting the answer: Yes if Chef likes the given word, and No otherwise.

Each letter of the output may be printed in either uppercase or lowercase, i.e. the strings NO, No, nO, and no will be treated as equivalent.

Constraints S has length 4 Each character of S is one among {a,b,…,z}.  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s[0] == 'c' || s[3] == 'f')
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
