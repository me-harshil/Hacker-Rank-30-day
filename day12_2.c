/*Given a list of unique integers nums sorted in ascending order, return the minimum i such that nums[i] == i. If there's no solution, return -1.

This should be done in \mathcal{O}(log(n))O(log(n)) time.

Input Format

length = 5 
arr = -5  -2  0  3  4
Constraints

n ≤ 100,000 where n is the length of nums.
Output Format

3

Sample Input 0

5
-5 -2 0 3 4
Sample Output 0

3
Explanation 0

Both nums[3] == 3 and nums[4] == 4 but 3 is smaller.
*/
#include<stdio.h>
int main(){
    int n,a[100000],i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        if(i==a[i]){
            printf("%d",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("-1");
}