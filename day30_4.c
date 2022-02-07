/*Given an integer array nums representing cash of each house, return the max amount of money you can rob tonight without alerting the police.

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

For e.g.:

If nums = [1,2,3,1], then output will be 4.
Explanation:
Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.*/
#include<stdio.h>
int main(){
    int i,n,a[100],max=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i+=2)
    max+=a[i];
    for(i=1;i<n;i+=2){
        sum+=a[i];
        if(sum>max)
        max=sum;
    }
    printf("%d",max);
}