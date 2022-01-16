/*Given an integer n greater than or equal to 0, return whether it is a power of two.
for example numbers like 1,2,4,8,16,......, return true or false.

example 1

Input:
    n = 1
Output:
    true
Explanation:
    2^0 = 1
*/
#include <stdio.h>
#include <math.h>
int main() {
int n,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        {
        if(n==pow(2,i)){
            printf("true");
            break;
        }
    }
    if(n!=pow(2,i))
       printf("false");
}
