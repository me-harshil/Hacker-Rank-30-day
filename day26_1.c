/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Example 2:
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]*/
#include<stdio.h>
int main(){
    int n,a[100],i,j,ans[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        ans[i]=1;
        for(j=0;j<n;j++){
            if(i!=j)
            ans[i]=a[j]*ans[i];
        }
        printf("%d ",ans[i]);
    }
}