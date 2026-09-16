# Fixed Points

## Problem

Given `N` and `K`, determine whether there exists a permutation `P` of the integers `[1, N]` that has **exactly `K` fixed points**.

A fixed point is an index `i` such that:

```text
P[i] = i
```

For each test case, print:

* `Yes` if such a permutation exists.
* `No` otherwise.

---

## Key Observation

If a permutation has exactly `K` fixed points, then the remaining:

```text
N - K
```

elements must **not** be fixed points.

A permutation with no fixed points is called a **derangement**.

### Important fact

A derangement exists for:

* `0` elements — trivially, there are no remaining elements.
* Any number `>= 2` of elements.

But a derangement does **not** exist for exactly `1` element.

Therefore, the only impossible case is:

```text
N - K = 1
```

Equivalently:

```text
K = N - 1
```

There is one additional special case:

```text
N = 1, K = 0
```

Here, `N - K = 1`, so it is also impossible.

Thus:

```text
If K == N - 1 → No
Otherwise      → Yes
```

---

## Example

### N = 3, K = 1

We need exactly one fixed point.

Consider:

```text
[1, 3, 2]
```

Here:

```text
P[1] = 1  → fixed
P[2] = 3  → not fixed
P[3] = 2  → not fixed
```

So there is exactly `1` fixed point.

Answer:

```text
Yes
```

### N = 2, K = 1

We would need one fixed point and one non-fixed element.

Suppose:

```text
P = [1, 2]
```

Both are fixed.

The only other permutation is:

```text
P = [2, 1]
```

Neither is fixed.

So exactly one fixed point is impossible.

Answer:

```text
No
```

---

## Algorithm

For every test case:

1. Read `N` and `K`.
2. If `N - K == 1`, print `No`.
3. Otherwise, print `Yes`.

---

## C++ Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        if (N - K == 1)
            cout << "No\n";
        else
            cout << "Yes\n";
    }

    return 0;
}
```

---

## Complexity

For each test case, we perform only a constant number of operations.

* **Time Complexity:** `O(T)`
* **Space Complexity:** `O(1)`

where `T` is the number of test cases.
