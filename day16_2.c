/*You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.

Given the integer n, return the number of complete rows of the staircase you will build.*/
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        n=n-i-1;
    printf("%d",i);
}