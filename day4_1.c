/*Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
Return the running sum of nums.
Example 1:
Input:length of nums = 4
nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].

Input Format

n = 4
arr = 1 2 3 4

Constraints

0 < n < 100

Output Format

1 3 6 10
*/
#include<stdio.h>
int main(){
    int a[100],n,sum[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sum[0]=0;
    for(i=0,j=0;i<n;i++){
        sum[j]=sum[j]+a[i];
        printf("%d ",sum[j]);
    }
}