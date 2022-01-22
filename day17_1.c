/*Given an integer n, return the sum of the first n positive odd integers.

Example 1 Input n = 5 Output 25 Explanation The first 5 odd integers are [1, 3, 5, 7, 9] and its sum is 25.*/
#include<stdio.h>
int main(){
    int n,sum=0,i;
    scanf("%d",&n);
    for(i=1;i<n*2;i+=2)
        sum+=i;
    printf("%d",sum);
}