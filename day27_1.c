/*Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

Example 1:
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4

Example 2:
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1*/
#include<stdio.h>
int main(){
    int n,i,a[100],tar,flag=0;
    scanf("%d%d",&n,&tar);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n;i++){
        if(tar==a[i]){
            flag=1;
            break;
        }
    }
    if (flag==1)
        printf("%d",i);
    else
    printf("-1");
}