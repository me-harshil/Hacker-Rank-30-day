/*You are given an integer array nums. Return true if you can reach the last index, or false otherwise.

You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.
For e.g.:
If nums = [2,3,1,1,4], then output will be true.
Explanation:
Jump 1 step from index 0 to 1, then 3 steps to the last index.
If nums = [3,2,1,0,4], then output will be false.
Explanation: 
You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.*/
#include <stdio.h>
int main() {
 int i,j=0,n,a[100],flag=0,jump=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        jump+=a[j];
        if(jump>=n){flag=1;break;}
        j=jump-1;
    }
    if(flag==1)
        printf("true");
    else 
        printf("false");
}
