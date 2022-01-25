/*Given an integer array nums of length n where ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n (0-indexed).' For e.g.: nums = [1,2,1] Then output will be [1,2,1,1,2,1] Explanation: The array ans is formed as follows: - ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]] - ans = [1,2,1,1,2,1]*/
#include<stdio.h>
int main(){
    int n,a[100],i,ans[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        ans[i]=ans[i+n]=a[i];
    for(i=0;i<n*2;i++)
        printf("%d ",ans[i]);
}