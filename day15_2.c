/*You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the ith customer has in the jth bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

Example: Input:
m = 2, n = 3,
accounts = [[1,2,3],[3,2,1]]
Output:
6
Explanation:
1st customer has wealth = 1 + 2 + 3 = 6
2nd customer has wealth = 3 + 2 + 1 = 6
Both customers are considered the richest with a wealth of 6 each, so return 6.*/
#include<stdio.h>
int main(){
    int n,i,a[1000][1000],m,j,max,sum;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);}
max=a[0][0];
    for(i=0;i<m;i++){
        sum=0;
        for(j=0;j<n;j++)
            sum+=a[i][j];
        if(max<sum)
        max=sum;
    }
printf("%d",max);
}