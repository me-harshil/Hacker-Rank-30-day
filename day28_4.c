/*Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value. If target is not found in the array, return [-1, -1].

Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]*/
#include<stdio.h>
int main(){
    int n,t,a[100],i,flag=0;
    scanf("%d%d",&n,&t);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        if(a[i]==t){
            flag=1;
            printf("%d ",i);
            break;
        }
    }
    for(i=n-1;i>=0;i--){
        if(a[i]==t){
            printf("%d",i);
            break;
        }
    }
    if(flag==0)
    printf("-1 -1");
}