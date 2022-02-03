/*You are given a list of integers nums. Return the minimum positive value we can append to the beginning of nums such that prefix sums of the resulting list contains numbers that are all greater than 0.

Example 1
Input
nums = [2, -5, 3, 2]
Output
4
Explanation
If we have append 4 to the list then we have [4, 2, -5, 3, 2].
The prefix sums are then [4, 6, 1, 4, 6], all of which are > 0.*/
#include <stdio.h>
int main()
{
    int n, a[100], i, sum = 0, j=1;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum < 0)
        {
            for (; j < 100; j++)
            {
                if (sum + j > 0)
                break;
            }
        }
    }
    printf("%d",j);
}