/*Given an array nums of integers, return how many of them contain an even number of digits.
For eg:
12 contains 2 digits (even number of digits).
345 contains 3 digits (odd number of digits).
2 contains 1 digit (odd number of digits).
6 contains 1 digit (odd number of digits).
7896 contains 4 digits (even number of digits).
Therefore only 12 and 7896 contain an even number of digits

Input Format

5 12 345 2 6 7896

Constraints

1 <= nums.length <= 500
1 <= nums[i] <= 105

Output Format

2*/
#include<stdio.h>
int main(){
    int a[100],n,i,count,even;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(count=0;a[i]>0;a[i]/=10){
            count++;
        }
        if(count%2==0)
        even++;
    }
    printf("%d",even);

}