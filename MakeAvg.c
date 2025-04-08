/*    Problem (Make Avg) - Solve the complete problem
You are given 2 integers - A and C.
You need to find if there exists any integer B which meets the following condition
B must be an integer ,B is the average of A and C.   */

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int A, C, B;
        scanf("%d %d", &A, &C);

        if ((A + C) % 2 == 0)
        {
            B = (A + C) / 2;
            printf("%d\n", B);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
