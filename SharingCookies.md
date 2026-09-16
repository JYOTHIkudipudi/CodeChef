# Sharing Cookies

## Problem

Alice has `A` cookies and Bob has `B` cookies, where `A > B`.

They want to have an equal number of cookies. Find how many cookies Alice needs to give Bob.

If it is impossible, print `-1`.

## Approach

Suppose Alice gives `x` cookies to Bob.

After giving:

* Alice has `A - x` cookies.
* Bob has `B + x` cookies.

For both to have the same number:

```text
A - x = B + x
```

Rearranging:

```text
A - B = 2x
```

Therefore:

```text
x = (A - B) / 2
```

So:

* If `A - B` is even, the answer is `(A - B) / 2`.
* If `A - B` is odd, equal sharing is impossible, so the answer is `-1`.

## Example 1

### Input

```text
6 2
```

Difference:

```text
6 - 2 = 4
```

Cookies Alice gives:

```text
4 / 2 = 2
```

After sharing:

```text
Alice = 6 - 2 = 4
Bob   = 2 + 2 = 4
```

### Output

```text
2
```

## Example 2

### Input

```text
5 2
```

Difference:

```text
5 - 2 = 3
```

Since `3` is odd, the cookies cannot be divided equally.

### Output

```text
-1
```

## C++ Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int diff = A - B;

    if (diff % 2 == 0) {
        cout << diff / 2;
    } else {
        cout << -1;
    }

    return 0;
}
```

## Complexity

* **Time Complexity:** `O(1)`
* **Space Complexity:** `O(1)`
