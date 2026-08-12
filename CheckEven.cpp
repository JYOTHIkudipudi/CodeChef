Check Even

You are given two integers

L

L and

R

R.


You have with you all the integers from

L

L to

R

R, inclusive of both ends.

That is, you have with you the integers


{

L

,

L

+

1

,

L

+

2

,

…

,

R

}

{L,L+1,L+2,…,R}

Are any of these integers even?


An integer is called even if and only if it is a multiple of

2

2.


Input Format

The only line of input will contain two space-separated integers

L

L and

R

R.

Output Format

Print Yes if there exists an even integer among the integers

{

L

,

L

+

1

,

L

+

2

,

…

,

R

}

{L,L+1,L+2,…,R}, and No otherwise.


Each character of the output may be printed in any case, i.e. the strings NO, No, nO, and no will be treated as equivalent.


Constraints

1

≤

L

≤

R

≤

10

1≤L≤R≤10

Sample 1:

Input

Output

3 5

Yes

Explanation:

The values with us are

{

3

,

4

,

5

}

{3,4,5}.

4

4 is even, so the answer is Yes.


Sample 2:

Input

Output

5 5

No

Explanation:

The only value with us is

5

5, which is not even. So the answer is No.


Sample 3:

Input

Output

4 9

Yes

Explanation:

The values with us are

{

4

,

5

,

6

,

7

,

8

,

9

}

{4,5,6,7,8,9}.

6

6 is even, 




#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, R;
    cin >> L >> R;

    if (L % 2 == 0 || L < R)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
