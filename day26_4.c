/*Given two binary strings a and b, return their sum as a binary string.

Example 1:
Input: a = "11", b = "1"
Output: "100"

Example 2:
Input: a = "1010", b = "1011"
Output: "10101"*/
#include<stdio.h>
#include<math.h>
int main(){
    int n1,n2,i,n3=0,n4=0,sum,a[10],j;
    scanf("%d%d",&n1,&n2);

    for(i=0;n1>0;n1/=10,i++)
        n3+=pow(2,i)*(n1%10);
    for(i=0;n2>0;n2/=10,i++)
        n4+=pow(2,i)*(n2%10);
    sum=n3+n4;
   for(i=0;sum>0;i++,sum/=2)
        a[i]=sum%2;
    for(j=i-1;j>=0;j--)
        printf("%d",a[j]);
}