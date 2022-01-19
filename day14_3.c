/*You are given a list nums of length n + 1 picked from the range 1, 2, ..., n. By the pigeonhole principle, there must be a duplicate. Find and return it. There is guaranteed to be exactly one duplicate. Bonus: Can you do this in \mathcal{O}(n) O(n) time and \mathcal{O}(1) O(1) space?

Example 1 Input length=4 nums = [1, 2, 3, 1] Output 1

Input Format

5 4 2 1 3 2

Constraints

n ≤ 10,000

Output Format

2

Sample Input 0

4
1 2 3 1
Sample Output 0

1
*/
#include<stdio.h>
int main(){
    int n,a[10000],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d",a[i]);
                break;
            }
        }
    }
}