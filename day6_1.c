/*For each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i]. Return the answer in an array.

Input Format

n = 5
nums = 8 1 2 2 3

Constraints

2 <= nums.length <= 500 0 <= nums[i] <= 100

Output Format

4 0 1 1 3*/
#include<stdio.h>
int main(){
    int num[100],n,j,i,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);

    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(j!=i&&num[j]<num[i])
            count++;
        }
        printf("%d ",count);
    }
}
