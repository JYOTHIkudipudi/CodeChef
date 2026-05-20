/*  Easy Speaking
Chef believes that a word is hard to pronounce if it contains a sequence of at least 4 contiguous characters that are all consonants.
Here, a consonant is every letter from a to z, except for the five letters {a, e, i, o, u}.

For example, the words  "syzygy","locksmith", and 
"worldview"
"worldview" are hard to pronounce, because:

"syzygy"
"syzygy" has length 
6
6 and is made up of entirely consonants.
"locksmith"
"locksmith" has the contiguous sequence 
"cksm"
"cksm" within it, which is all consonants.
"worldview"
"worldview" has the contiguous sequence 
"rldv"
"rldv" within it, which is all consonants.
On the other hand, the words 
"cry"
,
"scream"
,
"cry","scream", and 
"aqueous"
"aqueous" are not hard to pronounce.

You are given a word in the form of a string 
S
S containing 
N
N English letters.
Is this word hard to pronounce?

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer N, the length of the word.
The second line contains the string S of length N.
Output Format
For each test case, output on a new line the answer: Yes if the word is hard to pronounce, and No otherwise.

Each letter of the output may be printed in either uppercase or lowercase, i.e. the strings NO, No, nO, and no will all be considered equivalent.

Constraints
1≤T≤100
1≤N≤100
S has length N.
Each character of S is one of {a,b,c,…,z}.  */

#include <iostream>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || 
            c == 'o' || c == 'u');
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        int count = 0;
        bool hard = false;

        for (char c : S) {
            if (!isVowel(c)) {
                count++;
            } else {
                count = 0;
            }

            if (count >= 4) {
                hard = true;
                break;
            }
        }

        if (hard)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}

