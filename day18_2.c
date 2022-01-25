/*Given an integer n, return its base 3 representation as a string. Example:
Input n = 11
Output 102*/
#include<stdio.h>
int main(){
    int n,i,a[100];
    scanf("%d",&n);
    for(i=0;n>0;n/=3,i++)
        a[i]=n%3;
    for(i=i-1;i>=0;i--)
        printf("%d",a[i]);
}