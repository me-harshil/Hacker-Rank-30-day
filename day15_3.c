/*Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn]. Return the array in the form [x1,y1,x2,y2,...,xn,yn].

First line of input contains 2N (2N is the numbe of elements) The second line contains array on 2N elements seperated by spaces

Example 1: Input:

legth = 6 nums = [2,5,1,3,4,7], n = 3
Output:

[2,3,5,4,1,7]*/
#include<stdio.h>
int main(){
    int n,i,a[1000],b[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        printf("%d %d ",a[i],b[i]);  
}