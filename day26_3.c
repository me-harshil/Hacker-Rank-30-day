/*Given a list of positive integers nums, return the largest positive integer that divides each of the integers.

Example 1
Input
nums = [6, 12, 9]
Output
3
Explanation
3 is the largest integer that divides into 6, 12, and 9.
Example 2
Input
nums = [6, 7, 9]
Output
1
Explanation
7 is a prime number so only 1 divides into it.*/
#include<stdio.h>
int main(){
    int i,n,a[100],j,ans,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(j=1;j<100;j++){
        flag=0;
    for(i=0;i<n;i++){
        if(a[i]%j==0)
        continue;
        else 
        flag=1;
    }
    if(flag==0)
    ans=j;
    }
    printf("%d",ans);
}